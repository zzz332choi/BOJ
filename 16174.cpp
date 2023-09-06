#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	cin >> n;

	int** arr = new int* [n];
	bool** visited = new bool* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
		visited[i] = new bool[n];

		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			visited[i][j] = 0;
		}
	}

	int dr[2] = { 0, 1 };
	int dc[2] = { 1, 0 };

	struct POS {
		int r, c;
	};

	queue <POS> q;
	q.push({ 0, 0 });
	visited[0][0] = 1;

	while (!q.empty()) {
		POS& a = q.front();
		int cr = a.r;
		int cc = a.c;
		q.pop();

		for (int i = 0; i < 2; i++) {
			int nr = cr + arr[cr][cc] * dr[i];
			int nc = cc + arr[cr][cc] * dc[i];

			if (nr < 0 || nr >= n || nc < 0 || nc >= n) continue;
			else if (!visited[nr][nc]) {
				q.push({ nr, nc });
				visited[nr][nc] = 1;
			}
		}
	}

	if (visited[--n][n]) cout << "HaruHaru";
	else cout << "Hing";


	for (int i = 0; i <= n; i++) {
		delete[] arr[i];
		delete[] visited[i];
	}

	delete[] arr;
	delete[] visited;
}
