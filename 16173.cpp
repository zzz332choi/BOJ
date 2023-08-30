#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[3][3] = { 0 };
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	int dc[2] = { 1, 0 };
	int dr[2] = { 0, 1 };

	struct POS {
		int c, r;
	};

	queue<POS> q;
	q.push({ 0, 0 });

	bool visited[3][3] = { 1 };

	while (!q.empty()) {
		POS& p = q.front();

		int cc = p.c;
		int cr = p.r;

		q.pop();

		for (int i = 0; i < 2; i++) {
			int nc = cc + dc[i] * arr[cc][cr];
			int nr = cr + dr[i] * arr[cc][cr];

			if (nc < 0 || nc >= n || nr < 0 || nr >= n) continue;
			else if (!visited[nc][nr]) {
				q.push({ nc, nr });
				visited[nc][nr] = 1;
			}
		}
	}

	if (visited[--n][n]) cout << "HaruHaru";
	else cout << "Hing";
}
