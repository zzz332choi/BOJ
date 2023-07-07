#include <iostream>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	stack <int>stack_;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		stack_.push(num);
	}

	int high = stack_.top(), cnt = 1;

	for (int i = 1; i < n; i++) {
		stack_.pop();

		if (stack_.top() > high) {
			high = stack_.top();
			cnt++;
		}
	}

	cout << cnt;

}
