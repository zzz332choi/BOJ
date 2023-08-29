#include <iostream>
#include <map>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	map<int, int>m;

	while (t--) {
		int n;
		cin >> n;

		if (n == 1) {
			int x, w;
			cin >> x >> w;

			m.insert({ w, x });
		}
		else {
			int w;
			cin >> w;
			cout << m.find(w)->second << '\n';
		}
	}
}
