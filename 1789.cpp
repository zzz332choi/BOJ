#include <iostream>

using namespace std;

int main() {

	unsigned long long s;
	cin >> s;

	unsigned long long i = 1;

	while (2 * s > i * (i + 1)) i++;

	if (2 * s != i * (i + 1)) i--;

	cout << i;

}
