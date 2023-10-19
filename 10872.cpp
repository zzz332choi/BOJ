#include <iostream>

using namespace std;

#define endl '\n'

long long fun(long long n);

int main() {
	long long n;
	cin >> n;

	cout << fun(n);
}

long long fun(long long n)
{
	if (n > 1) return n * fun(n - 1);
	else return 1;
}
