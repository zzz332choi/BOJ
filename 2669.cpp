#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char A[101][101] = { 0 };
	
	for (int i = 0; i < 4; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1; j < y2; j++) 
			memset(A[j] + x1, '1', x2 - x1);
	
	}

	int cnt = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (!A[i][j]) continue;
			else cnt++;
		}
	}

	cout << cnt;
}
