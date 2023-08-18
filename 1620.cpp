#include <iostream>
#include <map>
#include <string>

#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	map <string, int> map_;
	string* str_ = new string[n + 1];

	for (int i = 1; i <= n; i++) {
		string str;
		cin >> str;

		str_[i] = str;
		map_.insert({ str, i });
	}

	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;

		if (str[0] >= '0' && str[0] <= '9') {
			int num = stoi(str);
			cout << str_[num] << endl;
		}

		else cout << map_.find(str)->second << endl;

	}

	delete[] str_;
}
