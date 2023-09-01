#include <iostream>
#include <queue>

using namespace std;

int main() {

	int t;
	cin >> t;

	struct POS {
		int y, x;
	};

	int dx[4] = { 1, -1 };
	int dy[4] = { 0, 0, 1, -1 };

	while (t--) {
		int arr[50][50] = { 0 };
		int m, n, k;
		cin >> m >> n >> k;

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;

			arr[y][x] = 1;
		}

		int cnt = 0;
		bool visited[50][50] = { 0 };

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!arr[i][j] || visited[i][j]) continue;
				else {
					cnt++;

					queue<POS> q;
					q.push({ i, j });
					visited[i][j] = 1;

					while (!q.empty()) {
						POS& p = q.front();

						int cx = p.x;
						int cy = p.y;

						q.pop();

						for (int l = 0; l < 4; l++) {
							int nx = cx + dx[l];
							int ny = cy + dy[l];

							if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
							else if (arr[ny][nx] && !visited[ny][nx]) {
								q.push({ ny, nx });
								visited[ny][nx] = 1;
							}
						}
					}
				}
			}
		}

		cout << cnt << endl;
	}
}
