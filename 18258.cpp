#include <iostream>
#include <queue>
#include <string>

#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	queue <int> q;

	while (n--) {
		string str;
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;

			q.push(num);
		}

		else if (str == "pop") {
			if (q.empty()) cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}

		else if (str == "size") {
			cout << q.size() << endl;
		}

		else if (str == "empty") {
			cout << q.empty() << endl;
		}

		else if (str == "front") {
			if (q.empty()) cout << -1 << endl;
			else cout << q.front() << endl;
		}

		else if (str == "back") {
			if (q.empty()) cout << -1 << endl;
			else cout << q.back() << endl;
		}
	}
}
