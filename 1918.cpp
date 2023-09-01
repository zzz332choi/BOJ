#include <iostream>
#include <string>
#include <stack>

using namespace std;

int getPriority(char c);

int main() {
	string s, ans;
	cin >> s;

	stack <char> sta;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
			if (sta.empty()) sta.push(s[i]);
			else {
				while (!sta.empty())
					if (getPriority(sta.top()) >= getPriority(s[i])) {
						ans.push_back(sta.top());
						sta.pop();
					}
					else break;

				sta.push(s[i]);

			}
		}

		else if (s[i] == '(') sta.push('(');
		else if (s[i] == ')') {
			while (!sta.empty())
				if (sta.top() != '(') {
					ans.push_back(sta.top());
					sta.pop();
				}
				else {
					sta.pop();
					break;
				}
		}
		else ans.push_back(s[i]);
	}

	while (!sta.empty()) {
		ans.push_back(sta.top());
		sta.pop();
	}

	cout << ans;
}

int getPriority(char c)
{
	if (c == '*' || c == '/') return 2;
	else if (c == '+' || c == '-') return 1;
	else return 0;
}


