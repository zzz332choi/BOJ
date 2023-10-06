#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	cin >> n;

	stack<int> sta;
	while (n) {
		sta.push(n % 2);
		n = n / 2;
	}

	int cnt = 0;
	while (!sta.empty()) {
		if (sta.top()) cnt++;
		sta.pop();
	}

	cout << cnt;
}
