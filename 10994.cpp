#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main() {

	int d, n;

	cin >> n;

	d = 4 * n - 2;

	char** map = new char* [d - 1];
	for (int i = 0; i < d - 1; i++) {
		map[i] = new char[d - 1];
		strcpy(map[i], " ");
		memset(map[i], ' ', d - 1);
	}

	int dd = d;

	for (int a = 0; a <= 2 * n - 1; a += 2) {
		memset(map[a] + a, '*', dd - a - 1);
		for (int i = 1; i < d - 2 * a - 2; i++) map[a + i][a] = map[a + i][d - a - 2] = '*';
		memset(map[d - a - 2] + a, '*', dd - a - 1);
		dd-=2;
	}

	for (int i = 0; i < d - 1; i++) {
		for (int j = 0; j < d - 1; j++)
			cout << map[i][j];
		cout << endl;
	}


	for (int i = 0; i < d - 1; i++) delete[] map[i];
	delete[] map;
}
