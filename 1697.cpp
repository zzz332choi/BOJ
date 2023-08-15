#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector <int>* v = new vector <int>[100001];
	int* check = new int[100001];


	for (int i = 0; i <= 100000; i++) {
		check[i] = 0;

		int e1 = i - 1, e2 = i + 1, e3 = 2 * i;

		if (e1 >= 0) v[i].push_back(e1);
		if (e2 <= 100000) v[i].push_back(e2);
		if (e3 <= 100000 && e3) v[i].push_back(e3);
	}

	queue <int> q;
	q.push(n);

	while (!q.empty()) {
		int num = q.front();
		if (num == m) break;
		q.pop();

		for (int i = 0; i < v[num].size(); i++) {
			if (!check[v[num].at(i)]) {
				q.push(v[num].at(i));
				check[v[num].at(i)] = check[num] + 1;
			}
		}
	}

	cout << check[m];

	delete[] check;
	delete[] v;

}
