#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n, cnt = 0;
	int arr[1000][1000] = { 0 };
	int dc[4] = { 1, -1 }, dr[4] = { 0, 0, 1, -1 };

	struct POS {
		int c, r;
	};

	cin >> m >> n;

	queue <POS> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != -1) cnt++;
			if (!arr[i][j]) continue;
			if (arr[i][j] == 1) q.push({ i, j });
		}
	}

	bool visited[1000][1000] = { 0 };

	while (!q.empty()) {

		int cc = q.front().c, cr = q.front().r;
		q.pop();

		for (int k = 0; k < 4; k++) {
			int nc = cc + dc[k], nr = cr + dr[k];

			if (!(nc >= 0 && nc < n && nr >= 0 && nr < m)) continue;
			else {
				if (arr[nc][nr] == 0 && !visited[nc][nr]) {
					q.push({ nc, nr });
					visited[nc][nr] = 1;
					arr[nc][nr] = arr[cc][cr] + 1;
				}
			}
		}

	}


	int ans = 1, cnt_ = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > 0) {
				cnt_++;
				ans = max(ans, arr[i][j]);
			}
			else continue;
		}
	}

	if (cnt == cnt_) cout << ans - 1;
	else cout << -1;

}
