#include <iostream>
#include <queue>

using namespace std;

#define endl '\n'

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	int M = 1;
	char map[100][100] = { 0 };

	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		--a, --b;
		map[a][b] = 1;
	}

	int dc[4] = { 1, -1 };
	int dr[4] = { 0, 0, 1, -1 };

	struct POS { int c, r; };
	queue <POS> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] != 1) continue;
			else {
				q.push({ i, j });
				int size = 1;
				map[i][j] = 2;

				while (!q.empty()) {
					int cc = q.front().c;
					int cr = q.front().r;
					q.pop();

					for (int l = 0; l < 4; l++) {
						int nc = cc + dc[l];
						int nr = cr + dr[l];

						if (nc < 0 || nc >= n || nr < 0 || nr >= m) continue;
						else if (map[nc][nr] == 1) {
							q.push({ nc, nr });
							size++;
							map[nc][nr] = 2;
							M = max(M, size);
						}
					}
				}
			}
		}
	}

	cout << M;
}
