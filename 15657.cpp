#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n';

int arr[8] = { 0 }, num[8] = {0};
int n, m;

void fun(int cnt);

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) cin >> num[i];

	sort(num, num + n);
	fun(0);
}

void fun(int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << endl;
	}

	else {
		for (int i = 0; i < n; i++) {
			if (cnt == 0) {
				arr[cnt] = num[i];
				fun(cnt + 1);
			}
			else if(cnt && arr[cnt - 1] <= num[i]) {
				arr[cnt] = num[i];
				fun(cnt + 1);
			}
		}
	}

}
