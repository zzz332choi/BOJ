#include <iostream>
#include <string>

using namespace std;
#define endl '\n'

int main() {
	int n;
	cin >> n;

	while (n--) {
		string str;
		cin >> str;

		if (str.length() >= 6 && str.length() <= 9) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
