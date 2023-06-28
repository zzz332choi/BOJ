#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool* visited;
int* order;
void dfs(vector <int>* v, int r);
int k = 1;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, r;
	cin >> n >> m >> r;

	visited = new bool[n + 1];
	order = new int[n + 1];
	
	for (int i = 0; i <= n; i++) {
		visited[i] = 0;
		order[i] = 0;
	}

	vector <int>* v = new vector<int>[n + 1];

	for (int i = 0; i < m; i++) {
		int num1, num2;
		cin >> num1 >> num2;

		v[num1].push_back(num2);
		v[num2].push_back(num1); // 반대도 연결(무방향 그래프)
	}

	for (int i = 1; i <= n; i++) sort(v[i].begin(), v[i].end()); // 벡터 정렬

	dfs(v, r);

	for (int i = 1; i <= n; i++) cout << order[i] << '\n';
}

void dfs(vector<int>* v, int r)
{
	if (!visited[r]) {
		order[r] = k++;
		visited[r] = 1;
	}

	for (int i = 0; i < v[r].size(); i++)
		if (visited[v[r].at(i)] == 0)
			dfs(v, v[r].at(i));
}
