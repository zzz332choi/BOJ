#include <iostream>

using namespace std;

void recu(int* arr, int m, int n, int cnt, int prev);

int main() {
	int m, n;
	cin >> n >> m;

	int arr[8] = { 0 };

	recu(arr, m, n, 0, 1);
}

void recu(int* arr, int m, int n, int cnt, int prev)
{
	
	if (cnt == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << endl;
	}
	else {
		cnt++;
		for (int i = prev; i <= n; i++) {
			
			arr[cnt - 1] = i;
			recu(arr, m, n, cnt, i);
		}
	}
}
