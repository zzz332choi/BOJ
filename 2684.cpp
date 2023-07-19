#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		char *str = new char [41];
		strcpy(str, "");

		cin >> str;

		int arr[8] = { 0 };

		for (int i = 0; i < 38; i++) {
			int k;

			if (!strncmp(str, "TTT", 3)) k = 0;
			else if (!strncmp(str, "TTH", 3)) k = 1;
			else if (!strncmp(str, "THT", 3)) k = 2;
			else if (!strncmp(str, "THH", 3)) k = 3;
			else if (!strncmp(str, "HTT", 3)) k = 4;
			else if (!strncmp(str, "HTH", 3)) k = 5;
			else if (!strncmp(str, "HHT", 3)) k = 6;
			else if (!strncmp(str, "HHH", 3)) k = 7;

			arr[k]++;
			str += 1;
		}

		for (int i = 0; i < 8; i++) cout << arr[i] << ' ';
		cout << endl;
	}
}
