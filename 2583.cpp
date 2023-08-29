#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int m, n, k;
	cin >> m >> n >> k;

	char map[100][100] = { 0 };

	while (k--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		for (int i = a; i < c; i++)
			memset(map[i] + b, 1, d - b);
	}

	vector <int>v;

	struct POS {
		int c, r;
	};

	int dc[4] = { 1, -1 };
	int dr[4] = { 0, 0, 1, -1 };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j]) continue;
			else {
				int cnt = 1;
				queue <POS>q;

				q.push({ i, j });
				map[i][j] = 1;

				while (!q.empty()) {
					int cc = q.front().c;
					int cr = q.front().r;

					q.pop();

					for (int l = 0; l < 4; l++) {
						int nc = cc + dc[l];
						int nr = cr + dr[l];

						if (nc < 0 || nc >= n || nr < 0 || nr >= m) continue;
						else if (!map[nc][nr]) {
							q.push({ nc, nr });
							map[nc][nr] = 1;
							cnt++;
						}
					}
				}

				v.push_back(cnt);
			}
		}
	}

	sort(v.begin(), v.end());

	cout << v.size() << endl;

	for (int i = 0; i < v.size(); i++) cout << v.at(i) << ' ';

}
