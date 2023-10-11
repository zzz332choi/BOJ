#include <iostream>
#include <map>
#include <string>
#include <stack>

using namespace std;

#define endl '\n'

int main() {
	int n;
	cin >> n;

	map<string, string> m;

	for (int i = 0; i < n; i++) {
		string str1, str2;
		cin >> str1 >> str2;

		if (m.find(str1) == m.end()) m.insert({ str1, str2 });
		else {
			auto it = m.find(str1);
			m.erase(it);
		}
	}

	stack <string> sta;

	for (auto it = m.begin(); it != m.end(); it++) sta.push(it->first);

	while (!sta.empty()) {
		cout << sta.top() << endl;
		sta.pop();
	}
}
