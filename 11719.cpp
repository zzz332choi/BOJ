#include <iostream>
#include <string>

using namespace std;

#define endl '\n'

int main() {
	string str;
	getline(cin, str);

	while (!cin.eof()) {
		cout << str << endl;
		getline(cin, str);
	}
}
