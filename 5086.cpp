#include <iostream>

using namespace std;

int main() {
	while(1){
		int n, m;

		cin >> n >> m;

		if (!n && !m) return 0;

		if (!(n % m)) cout << "multiple\n";
		else if (!(m % n)) cout << "factor\n";
		else cout << "neither\n";
	}
}
