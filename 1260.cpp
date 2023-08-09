#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

void dfs(vector <int> *v, int k, bool *f);
void bfs(vector <int> *v, int k, bool *f, queue <int> q);

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;

	vector <int>* v = new vector <int>[n + 1];
	bool *find1 = new bool[n + 1]; // dfs
	bool *find2 = new bool[n + 1]; // bfs
	queue <int> q;

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;

		// 양방향 연결
		v[s].push_back(e);
		v[e].push_back(s);
	}

	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end());
		find1[i] = 0; // dfs
		find2[i] = 0; // bfs
	}

	dfs(v, k, find1);
	cout << endl;
	bfs(v, k, find2, q);

	delete[] v;
	delete[] find1;
	delete[] find2;
}

void dfs(vector<int> *v, int k, bool *f)
{
	
	if (!f[k]) {
		f[k] = 1; // 방문 했음을 표시
		cout << k << ' ';
	}

	for (int i = 0; i < v[k].size(); i++) {
		if (!f[v[k].at(i)])
			dfs(v, v[k].at(i), f);
	}

	return;
}

void bfs(vector<int>* v, int k, bool* f, queue <int> q)
{
	q.push(k); // 큐 정점 삽입

	if (!f[k]) {
		f[k] = 1; // 방문 했음을 표시
		cout << k << ' ';
	}

	while (!q.empty()) {
		int head = q.front();
		q.pop();

		for (int i = 0; i < v[head].size(); i++) {
			if (!f[v[head].at(i)]) {
				q.push(v[head].at(i));
				f[v[head].at(i)] = 1; // 방문 했음을 표시
				cout << v[head].at(i) << ' ';
			}
		}
	}
}
