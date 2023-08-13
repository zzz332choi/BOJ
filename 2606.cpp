#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector <int>* v = new vector <int>[n + 1];

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;

		v[s].push_back(e);
		v[e].push_back(s);
	}

	queue <int> q;

	q.push(1);

	bool* check = new bool[n + 1];

	for (int i = 1; i <= n; i++) check[i] = 0;

	while (!q.empty()) {
		int num = q.front();
		q.pop();

		check[num] = 1;

		for (int i = 0; i < v[num].size(); i++) {
			if (!check[v[num].at(i)]) {
				q.push(v[num].at(i));
			}
		}
	}

	int cnt = 0;

	for (int i = 2; i <= n; i++) if (check[i]) cnt++;

	cout << cnt;

	delete[] v;
	delete[] check;
}
