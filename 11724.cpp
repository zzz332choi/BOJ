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

	int cnt = 0;
	int* check = new int[n + 1];

	for (int i = 1; i <= n; i++) check[i] = 0;

	for (int i = 1; i <= n; i++) {
		queue <int> q;
		q.push(i);
		
		if (!check[i]) cnt++;
		else continue;

		while (!q.empty()) {
			int num = q.front();
			q.pop();

			for (int j = 0; j < v[num].size(); j++) {
				if (!check[v[num].at(j)]) {
					check[v[num].at(j)] = cnt;
					q.push(v[num].at(j));
				}
			}
		}
		
	}

	cout << cnt;

}
