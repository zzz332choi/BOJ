#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'

int n, m;
int arr[8] = { 0 };
int arr_[8] = { 0 };

void re(int num, int p);

int main(){

	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	sort(arr, arr + n);

	re(0, 0);
}

void re(int num, int p)
{
	if (num == m) {
		for (int i = 0; i < m; i++) cout << arr_[i] << ' ';
		cout << endl;
	}

	else {
		for (int i = 0; i < n; i++) {
			if (arr[i] > p) {
				arr_[num] = arr[i];
				re(num + 1, arr_[num]);
			}
		}
	}

}
