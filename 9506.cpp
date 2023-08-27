#include <iostream>

using namespace std;

#define endl '\n';

int main() {

	int n;
	cin >> n;

	while (n != -1) {
		
		int sum = 0, cnt = 0;
		int* arr = new int[n];

		for (int i = 1; i < n; i++)
			if (n % i) continue;
			else {
				sum += i;
				arr[cnt++] = i;
			}

		cout << n << ' ';

		if (sum == n) {
			cout << "= ";
			for (int i = 0; i < cnt - 1; i++) {
				cout << arr[i] << " + ";
			}
			cout << arr[cnt - 1] << endl;
		}

		else cout << "is NOT perfect." << endl;

		delete[] arr;
	
		cin >> n;
	}

}
