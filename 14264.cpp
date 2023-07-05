#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double l;
	cin >> l;

	cout << fixed;
	cout.precision(10);

	cout << pow(l, 2) / 4 * sqrt(3);
}
