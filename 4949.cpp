#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stack>

#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	getline(cin, str);

	while (str != ".") {

		stack <char> sta;
		bool flag = 0;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '[') sta.push('[');
			else if (str[i] == '(') sta.push('(');

			if (!sta.empty()) {
				if (str[i] == ']') {
					if (sta.top() == '[') sta.pop();
					else flag = 1;
				}
				else if (str[i] == ')') {
					if (sta.top() == '(') sta.pop();
					else flag = 1;
				}
			}
			else if (sta.empty() && (str[i] == ']' || str[i] == ')')) flag = 1;
		}

		if (sta.empty() && !flag) cout << "yes" << endl;
		else cout << "no" << endl;

		getline(cin, str);
	}

}
