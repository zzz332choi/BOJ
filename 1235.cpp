#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n;
	cin >> n;

	string* arr = new string[n];

	for (int i = 0; i < n; i++) cin >> arr[i];

	int i = 1, len = arr[i].length();
	for (i = 1; i < len; i++) {

		map<string, int> m;

		for (int j = 0; j < n; j++) {
			string str = arr[j].substr(len - i, i);
			
			m.insert({ str, 0 });
		}

		if (m.size() != n) continue;
		else break;
	}

	cout << i;
	delete[] arr;
}
