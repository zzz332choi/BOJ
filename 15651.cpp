#include <iostream>

using namespace std;

#define endl '\n'

int n, m;
int arr[7] = { 0 };

void re(int num);

int main(){

	cin >> n >> m;
	
	re(0);
}

void re(int num)
{
	if (num == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << endl;
	}

	else {
		for (int i = 0; i < n; i++) {
			arr[num] = i + 1;
			re(num + 1);
		}
	}
}
