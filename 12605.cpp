#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	char str[30];
	cin.ignore();

	for(int i=1; i<=t; i++) {

		stack <char*>sta;

		cin.getline(str, 30);

		char* p = strtok(str, " ");
		int cnt = 0;

		while (p) {
			sta.push(p);
			p = strtok(NULL, " ");
			cnt++;
		}

		cout << "Case #" << i << ": ";
		while (!sta.empty()) {
			cout << sta.top() << ' ';
			sta.pop();
		}
		cout << '\n';
	}
		
}
