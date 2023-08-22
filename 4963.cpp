#include <iostream>
#include <queue>

#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	struct POS {
		int col, row;
	};

	int w, h;
	cin >> w >> h;

	int dc[8] = { 0, 0, 1, -1, 1, 1, -1, -1 };
	int dr[8] = { 1, -1, 0, 0, 1, -1, 1, -1 };

	while (w && h) {

		queue<POS> q;

		int map[50][50] = { 0 };
		bool visited[50][50] = { 0 };

		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> map[i][j];

		int cnt = 0;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {

				if (!(map[i][j] && !visited[i][j])) continue;
				
				else {
					cnt++;

					q.push({ i, j });

					while (!q.empty()) {
						int cc = q.front().col;
						int cr = q.front().row;
						q.pop();

						for (int k = 0; k < 8; k++) {
							int nc = cc + dc[k];
							int nr = cr + dr[k];

							if(nc >= 0 && nc < h && nr >= 0 && nr < w)
								if (map[nc][nr] && !visited[nc][nr]) {
									q.push({ nc, nr });
									visited[nc][nr] = 1;
								}
						}

					}
				}
			}
		}

		cout << cnt << endl;

		cin >> w >> h;
	}
}
