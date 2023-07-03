#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char str[91] = { 0 };
	cin >> str;

	long long sum = 0;
	bool flag = 1;

	for (int i = 0; i < strlen(str); i++) {
		long long num = 0, j;

		for (j = i; str[j] != '-' && str[j] != '+' && j < strlen(str); j++) {
			num *= 10;
			num += str[j] - '0';

		}

		if (i > 1)	if (str[i - 1] == '-') flag = 0;
		i = j;

		if (flag) sum += num;
		else sum -= num;
	
	}

	cout << sum;
}
