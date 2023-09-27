#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define endl '\n'

int main() {
	int n;
	cin >> n;

	int s, e;
	cin >> s >> e;

	int m;
	cin >> m;

	vector<int>* v = new vector<int>[n + 1];

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;

		v[x].push_back(y);
		v[y].push_back(x);
	}

	int* visited = new int[n + 1];

	for (int i = 0; i <= n; i++) visited[i] = 0;

	int cnt = 0;

	queue <int> q;
	q.push(s);

	while (!q.empty()) {
		int num = q.front();
		q.pop();

		for (int i = 0; i < v[num].size(); i++) {
			if (!visited[v[num].at(i)]) {
				q.push(v[num].at(i));
				visited[v[num].at(i)] = visited[num] + 1; ;
			}
		}
	}

	if (!visited[e]) cout << -1;
	else cout << visited[e];

	delete[] visited;
	delete[] v;
}
