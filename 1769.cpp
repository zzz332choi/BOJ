#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

unsigned long long atoull(const char* str) {
	unsigned long long num = 0;

	for (int i = 0; i < strlen(str); i++) {
		num *= 10;
		num += str[i] - '0';
	}

	return num;
}

int main() {
	char str[1000001] = { 0 };
	cin >> str;
	unsigned long long num = atoull(str), cnt = 0;;

	while (atoull(str) / 10) {
		cnt++;
		num = 0;
		
		for (int i = 0; i < strlen(str); i++) {
			num += str[i] - '0';
		}

		sprintf(str, "%d", num);
	}

	cout << cnt << endl;

	if (num % 3 == 0) cout << "YES";
	else cout << "NO";
}
