#include <iostream>
#include <queue>
#include <algorithm>

#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	struct POS {
		int col, row;
	};

	char map[25][25] = { 0 };
	int map1[25][25] = { 0 };
	bool visited[25][25] = { 0 };

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	int dc[4] = { 0, 0, -1, 1 };
	int dr[4] = { -1, 1, 0, 0 };

	int cnt = 0;

	queue <POS> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (map[i][j] == '1' && !visited[i][j]) {
				cnt++;

				q.push({ i, j });
				visited[i][j] = 1;
				map1[i][j] = cnt;

				while (!q.empty()) {
					int cc = q.front().col;
					int cr = q.front().row;
					q.pop();

					for (int k = 0; k < 4; k++) {
						int nc = cc + dc[k];
						int nr = cr + dr[k];

						if (nc >= 0 && nc < n && nr >= 0 && nr < n)
							if (map[nc][nr] == '1' && !visited[nc][nr]) {
								map1[nc][nr] = cnt;
								visited[nc][nr] = 1;
								q.push({ nc, nr });
							}
					}

				}

			}

			else continue;
		}
	}


	int* arr = new int[cnt + 1];
	for (int i = 0; i <= cnt; i++) arr[i] = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[map1[i][j]]++;

	sort(arr + 1, arr + cnt + 1);

	cout << cnt << endl;

	for (int i = 1; i <= cnt; i++)
		cout << arr[i] << endl;

	delete[] arr;

}
