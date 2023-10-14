#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

#define endl '\n'

int main() {

	map <int, int>m;
	vector <int> v;

	for (int i = 0; i < 8; i++) {
		int num;
		cin >> num;

		m.insert({ num, i + 1 });
	}

	int sum = 0;

	auto iter = m.end();

	for (int i = 0; i < 5; i++) {
		--iter;
		sum += iter->first;
		v.push_back(iter->second);
	}

	sort(v.begin(), v.end());

	cout << sum << endl;

	for (int i = 0; i < 5; i++) {
		cout << v[i] << ' ';
	}

}
