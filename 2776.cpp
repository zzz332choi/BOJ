#include <iostream>
#include <map>

using namespace std;

#define endl '\n'

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		map<int, int> m;

		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;

			m.insert({ num, 0 });
		}

		
		int k;
		cin >> k;

		for (int j = 0; j < k; j++) {
			int num;
			cin >> num;

			if (m.find(num) != m.end()) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
}
