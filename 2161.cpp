#include <iostream>
#include <queue>

using namespace std;

#define endl '\n'

int main() {
	int n;
	cin >> n;

	queue <int> q;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}


	while (!q.empty()) {

		cout << q.front() << ' ';
		q.pop();
		if (!q.empty()) {
			q.push(q.front());
			q.pop();
		}

	}

}
