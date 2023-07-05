#include <iostream>

using namespace std;

int main() {
	
	long long n, m;
	cin >> n >> m;

	cout << max(m, n) - min(m, n);

}
