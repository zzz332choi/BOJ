#include <iostream>
#include <map>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, M = 1;
	cin >> n;

	map<string, int> m;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		if (m.find(str) == m.end()) m.insert({ str, 1 });
		else {
			auto it = m.find(str);
			it->second++;
			M = max(M, it->second);
		}
	}

	for (auto iter : m) {
		if (M != iter.second) continue;
		else {
			cout << iter.first;
			break;
		}
	}
}
