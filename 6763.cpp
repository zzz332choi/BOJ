#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	if (a >= b) cout << "Congratulations, you are within the speed limit!";

	else if (a + 20 >= b) cout << "You are speeding and your fine is $100.";

	else if (a + 30 >= b) cout << "You are speeding and your fine is $270.";

	else cout << "You are speeding and your fine is $500.";
		
}
