#include <iostream>
#include <algorithm>

using namespace std;
int* arr, * num, * check;
int n, m;
void fun(int cnt);

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	arr = new int[n];
	num = new int[n];
	check = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> num[i];
		arr[i] = check[i] = 0;
	}

	sort(num, num + n);
	fun(0);

	delete[] arr, num, check;
}

void fun(int cnt)
{
	if (cnt == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	else {
		for (int i = 0; i < n; i++)
			if (!check[i]) {
				arr[cnt] = num[i];
				check[i] = 1;
				fun(cnt + 1);
				check[i] = 0;
			}
	}

	return;
}
