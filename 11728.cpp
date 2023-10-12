#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

#define endl '\n'

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	queue <int> v1, v2;

	while (n--) {
		int num;
		cin >> num;

		v1.push(num);
	}

	while (m--) {
		int num;
		cin >> num;

		v2.push(num);
	}


	while (!v1.empty() || !v2.empty()) {
		if (!v1.empty() && !v2.empty()) {
			if (v1.front() > v2.front()) {
				cout << v2.front() << ' ';
				v2.pop();
			}
			else {
				cout << v1.front() << ' ';
				v1.pop();
			}
		}
		
		else if (v1.empty()) {
			cout << v2.front() << ' ';
			v2.pop();
		}

		else {
			cout << v1.front() << ' ';
			v1.pop();
		}
	}
}
