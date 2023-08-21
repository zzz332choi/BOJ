#define CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

int main() {

	struct POS {
		int col, row;
	};

	queue <POS> q;

	int n, m;
	cin >> n >> m;

	char** map = new char* [n];
	bool** check = new bool* [n];
	
	for (int i = 0; i < n; i++) {
		map[i] = new char[m];
		check[i] = new bool[m];

		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			check[i][j] = 0;

			if (map[i][j] != 'I') continue;
			else {
				q.push({ i, j });
				check[i][j] = 1;
			}
		}
	}

	int dr[4] = { -1, 1, 0, 0 };
	int dc[4] = { 0, 0, 1, -1 };

	int person = 0;
	while (!q.empty()) {
		int cc = q.front().col;
		int cr = q.front().row;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nc = cc + dc[i];
			int nr = cr + dr[i];

			if (nc >= 0 && nc < n && nr >= 0 && nr < m) 
				if (map[nc][nr] != 'X' && !check[nc][nr]) {
					q.push({ nc, nr });
					check[nc][nr] = 1;
					
					if (map[nc][nr] == 'P') person++;
				}
		}
	}

	if (person) cout << person;
	else cout << "TT";

	for (int i = 0; i < n; i++) {
		delete[] map[i];
		delete[] check[i];
	}

	delete[] map;
	delete[] check;

}
