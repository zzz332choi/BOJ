#include <iostream>
#include <queue>

#define endl '\n'

using namespace std;

struct POS {
	int col, row;
};

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

int main() {
	int n, m;
	cin >> n >> m;

	queue <POS> q;

	int** arr = new int* [n];
	bool** check = new bool* [n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
		check[i] = new bool[m];
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			check[i][j] = 0;
			if (arr[i][j] != 2) continue;
			else {
				q.push({ i, j });
				check[i][j] = 1;
				arr[i][j] = 0;
			}
		}
	}

	while (!q.empty()) {
		int cc = q.front().col, cr = q.front().row;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nc = cc + dy[i], nr = cr + dx[i];
			if(nc >= 0 && nc < n && nr >= 0 && nr < m)
				if (!check[nc][nr] && arr[nc][nr]) {
					check[nc][nr] = 1;
					q.push({ nc, nr });
					arr[nc][nr] = arr[cc][cr] + 1;
				}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check[i][j] || !arr[i][j]) cout << arr[i][j] << ' ';
			else cout << -1 << ' ';
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
		delete[] check[i];
	}

	delete[] arr;
	delete[] check;
}
