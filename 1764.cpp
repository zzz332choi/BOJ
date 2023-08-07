#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl '\n'

#define h 1001

using namespace std;

int ascii(string str) {
	int val = 0;
	for (int i = 0; i < str.length(); i++)
		val += str[i];
	return val;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector <string> v[h];
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		v[ascii(str) % h].push_back(str);
	}

	vector <string> no;

	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;

		if (find(v[ascii(str) % h].begin(), v[ascii(str) % h].end(), str) != v[ascii(str) % h].end())
			no.push_back(str);
	}

	sort(no.begin(), no.end());

	int size = no.size();

	cout << size << endl;

	for (int i = 0; i < size; i++) {
		cout << *(no.begin() + i) << endl;
	}
}
