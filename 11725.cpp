#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define endl '\n'

int main() {
	int n;
	cin >> n;

	int* arr = new int[n + 1];
	bool* visited = new bool[n + 1];

	vector <int>* v = new vector <int>[n + 1];

	for (int i = 1; i <= n; i++) {
		arr[i] = 0;
		visited[i] = 0;
	}
	for (int i = 1; i < n; i++) {
		int e1, e2;
		cin >> e1 >> e2;

		v[e1].push_back(e2);
		v[e2].push_back(e1);
	}

	for (int i = 1; i <= n; i++) sort(v[i].begin(), v[i].end());

	queue <int> q;
	q.push(1);
	arr[1] = 1;
	visited[1] = 1;

	while (!q.empty()) {
		int a = q.front();
		q.pop();

		for (int i = 0; i < v[a].size(); i++) {
			if (!visited[v[a][i]]) {
				q.push(v[a][i]);
				arr[v[a][i]] = a;
				visited[v[a][i]] = 1;
			}
		}
	}

	for (int i = 2; i <= n; i++) cout << arr[i] << endl;

	delete[] arr;
	delete[] visited;
	delete[] v;
}
