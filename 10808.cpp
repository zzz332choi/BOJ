#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str[101] = { 0 };
	cin >> str;

	int arr['z' - 'a' + 1] = { 0 };

	for (int i = 0; i < strlen(str); i++) arr[str[i] - 'a']++;
	for (int i = 0; i <= 'z' - 'a'; i++) cout << arr[i] << ' ';

}
