#include <iostream>

using namespace std;

int main() {
	int n, m, r_cnt = 0, c_cnt = 0;
	cin >> n >> m;
	char map[50][50] = { 0 };

	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> map[i][j];

	for (int i = 0; i < n; i++) {

		bool flag = 0;

		for (int j = 0; j < m; j++) {
			if (map[i][j] == '-') {
				flag = 1;
				r_cnt++;
				while (++j < m && flag) {
					if (map[i][j] == '-');
					else {
						flag = 0;
						j--;
					}
				}
			}
			else continue;
		}
	}

	for (int i = 0; i < m; i++) {
		bool flag = 0;

		for (int j = 0; j < n; j++) {
			if (map[j][i] == '|') {
				flag = 1;
				c_cnt++;
				while (++j < n && flag) {
					if (map[j][i] == '|');
					else {
						flag = 0;
						j--;
					}
				}
			}
			else continue;
		}
	}

	cout << r_cnt + c_cnt;

}
