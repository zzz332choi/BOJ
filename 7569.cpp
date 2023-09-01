#include <iostream>
#include <queue>

using namespace std;

int main() {
	int m, n, h;
	cin >> m >> n >> h;

	struct POS {
		int z, y, x;
	};
	
	queue <POS> q;

	int arr[100][100][100] = { 0 };
	int cnt = 0;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> arr[i][j][k];

				if (arr[i][j][k] != -1) {
					cnt++;
					if (arr[i][j][k]) q.push({ i, j, k });			
				}
			}
		}
	}

	int dz[6] = { 1, -1 };
	int dy[6] = { 0, 0, 1, -1 };
	int dx[6] = { 0, 0, 0, 0, 1, -1 };

	while (!q.empty()) {
		int cz = q.front().z;
		int cy = q.front().y;
		int cx = q.front().x;

		q.pop();

		for (int i = 0; i < 6; i++) {
			int nz = cz + dz[i];
			int ny = cy + dy[i];
			int nx = cx + dx[i];

			if (nz < 0 || nz >= h || ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			else if (!arr[nz][ny][nx]) {
				q.push({ nz, ny, nx });
				arr[nz][ny][nx] = arr[cz][cy][cx] + 1;
			}
		}
	}

	int cnt_ = 0, day = 1;

	for (int i = 0; i < h; i++) for (int j = 0; j < n; j++) for (int k = 0; k < m; k++) if (arr[i][j][k] > 0) {
		cnt_++;
		day = max(day, arr[i][j][k]);
	}
	if (cnt_ == cnt) cout << day - 1;
	else cout << -1;
	
}
