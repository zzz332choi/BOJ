#include <iostream>
#include <map>

using namespace std;

#define endl '\n'

int main() {
	int n;
	cin >> n;

	map <int, int>m;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		m.insert({ num, 0 });
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << ' ';
	}
}
