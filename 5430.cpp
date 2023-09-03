#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include <string>
#include <cstring>

#define endl '\n';
using namespace std;

int atoi(char* str);

int main() {
	int t;
	cin >> t;

	while (t--) {
		string op;
		cin >> op;
		int n;
		cin >> n;

		string str;
		cin >> str;

		str.pop_back();

		char* sss = new char[str.length() + 1];
		strcpy(sss, str.c_str());
		sss += 1;

		deque<int> dq;

		char* s = strtok(sss, ",");
		while (s) {
			dq.push_back(atoi(s));
			s = strtok(NULL, ",");
		}

		bool flag_R = 0;

		int len = op.length();

		for (int i = 0; i < len; i++) {
			if (op[i] == 'R') flag_R = !flag_R;
			else if (!dq.empty() && op[i] == 'D') {
				if (flag_R) dq.pop_back();
				else dq.pop_front();
			}
			else if (dq.empty() && op[i] == 'D') {
				cout << "error" << endl;
				break;
			}

			if (i != len - 1) continue;

			cout << '[';
			if (!dq.empty()) {
				while (dq.size() != 1) {
					if (!flag_R) {
						cout << dq.front() << ',';
						dq.pop_front();
					}
					else {
						cout << dq.back() << ',';
						dq.pop_back();
					}
				}
				cout << dq.front();
			}
			cout << ']' << endl;
		}

	}
}

int atoi(char* str)
{
	int len = strlen(str), num = 0;

	for (int i = 0; i < len; i++) {
		num *= 10;
		num += str[i] - '0';
	}

	return num;
}
