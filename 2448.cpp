#include <iostream>
#include <cstring>

using namespace std;

void draw(int row, int col, int hight, char** map) {
	if (hight == 3) {
		map[col][row] = '*';
		map[col + 1][row - 1] = map[col + 1][row + 1] = '*';
		for (int i = row - 2; i < row + 3; i++) map[col + 2][i] = '*';
	}

	else {
		draw(row, col, hight / 2, map);
		draw(row + hight / 2, col + hight / 2, hight / 2, map);
		draw(row - hight / 2 , col + hight / 2, hight / 2, map);
	}
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	char** map = new char* [n];
	for (int i = 0; i < n; i++) {
		map[i] = new char[2 * n];
		memset(map[i], ' ', 2 * n);
	}

	draw(n - 1, 0, n, map);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n; j++)
			cout << map[i][j];
		cout << '\n';
	}

	for (int i = 0; i < n; i++) delete[] map[i];
	delete[] map;
}
