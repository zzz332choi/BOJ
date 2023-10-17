#include <iostream>
#include <stack>

using namespace std;

#define endl '\n'

int arr[8] = { 0 };
bool v[8] = { 0 };

void fun(int cnt);
int n, m;

int main() {

	cin >> n >> m;

	fun(0);
}

void fun(int cnt)
{
	if (m == cnt) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}

	else {
		for (int i = 0; i < n; i++) {
			if (v[i] == 0) {
				arr[cnt] = i + 1;
				v[i] = 1;
				fun(cnt + 1);
				v[i] = 0;
			}
		}
	}
}
