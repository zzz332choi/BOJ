#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	cin >> n;

	for (int i = 0; i < n * n; i++) {
		int num;
		cin >> num;

		pq.push(num);

		if (pq.size() > n) pq.pop();
	}

	cout << pq.top();

}
