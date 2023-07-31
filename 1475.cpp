#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int main() {
	char str[8] = { 0 };
	int arr[9] = { 0 };

	cin >> str;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '9') arr[6]++;
		else arr[str[i] - '0']++;
	}

	arr[6] = round((double)arr[6] / 2.0);

	int Max = arr[0];

	for (int i = 1; i < 9; i++) Max = max(Max, arr[i]);

	cout << Max;
}
