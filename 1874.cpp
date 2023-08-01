#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	stack <int> sta1, sta2;
	stack <char> sta;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		sta1.push(num);
	}

	bool flag = 1;

	while (!(sta1.empty() && sta2.empty()) && flag) {
		flag = 0;

		if (!sta1.empty() && sta2.empty()) {
			sta2.push(sta1.top());
			sta1.pop();
			sta.push('-');
			flag = 1;
		}

		else if (!sta1.empty() && !sta2.empty()) {
			if (sta2.top() == n) {
				sta2.pop();
				n--;
				flag = 1;
				sta.push('+');
			}

			else {
				sta2.push(sta1.top());
				sta1.pop();
				sta.push('-');
				flag = 1;
			}
		}

		if (!sta2.empty()) {
			if (sta2.top() == n) {
				sta2.pop();
				n--;
				flag = 1;
				sta.push('+');
			}
		}

	}

	if (!flag) cout << "NO";
	else {
		while (!sta.empty()) {
			cout << sta.top() << '\n';
			sta.pop();
		}
	}
}
