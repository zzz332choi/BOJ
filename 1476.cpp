#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned long long e, s, m, i = 0;
	cin >> e >> s >> m;

	while (i % 15 + 1 != e || i % 28 + 1 != s || i % 19 + 1 != m)
		i++;

	cout << i + 1;

}
