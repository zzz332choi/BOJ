#include <iostream>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k = 1;
	cin >> n;

	stack <int> sta1, sta2;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		for (int j = 0; j < num; j++) {
			int a = sta1.top();
			sta2.push(a);
			sta1.pop();
		}

		sta1.push(k++);

		for (int j = 0; j < num; j++) {
			int a = sta2.top();
			sta1.push(a);
			sta2.pop();
		}

	}

	for (int i = 0; i < n; i++) {
		sta2.push(sta1.top());
		sta1.pop();
	}

	for (int i = 0; i < n; i++) {
		cout << sta2.top() << ' ';
		sta2.pop();
	}

	
}
