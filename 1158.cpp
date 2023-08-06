#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	queue <int> queue_;

	for (int i = 0; i < n; i++) queue_.push(i + 1);
		
	cout << '<';

	while (!queue_.empty() && queue_.size() != 1) {
		for (int i = 0; i < m - 1; i++) {
			queue_.push(queue_.front());
			queue_.pop();
		}
		cout << queue_.front() << ", ";
		queue_.pop();
	}

	cout << queue_.front() << '>';
}
