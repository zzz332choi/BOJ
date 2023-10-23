#include <iostream>

using namespace std;

#define endl '\n'

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		for (int i = 0; i < num; i++) cout << '=';
		cout << endl;
	}
}
