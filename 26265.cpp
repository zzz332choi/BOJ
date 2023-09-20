#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#define endl '\n'

int main() {
	int n;
	cin >> n;

	map <string, vector<string>> m;

	for (int i = 0; i < n; i++) {
		string str1, str2;
		cin >> str1 >> str2;

		if (m.find(str1) == m.end()) {
			vector<string> v;
			v.push_back(str2);

			m.insert({ str1, v });
		}

		else {
			m.find(str1)->second.push_back(str2);
		}
	}

	for (auto iter : m) {
		sort(iter.second.begin(), iter.second.end(), greater<string>());

		for (int i = 0; i < iter.second.size(); i++) {
			cout << iter.first << ' ' << iter.second.at(i) << endl;
		}
	}

}
