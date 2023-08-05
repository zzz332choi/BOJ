#include <iostream>

#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	unsigned int* arr = new unsigned int[n + 1];


	for (int i = 0; i <= n; i++) arr[i] = 0;

	int pos = 0; // 가장 마지막 노드 저장할 것

	for (int i = 0; i < n; i++) {
		unsigned int num;
		cin >> num;

		if (!num) {
			cout << arr[1] << endl;
			arr[1] = 0;
			swap(arr[1], arr[pos]); // 가장 마지막에 노드가 루트로 오게 설계

			int pos1 = 1;

			while (1) {
				if (arr[pos1 * 2 + 1]) pos1 = (arr[pos1 * 2] > arr[pos1 * 2 + 1] ? pos1 * 2 : pos1 * 2 + 1);
				else pos1 *= 2; // 오른쪽 자노드가 없는 경우 

				if (arr[pos1 / 2] < arr[pos1] && arr[pos1]) swap(arr[pos1 / 2], arr[pos1]);
				else break;
			}

			if (pos) pos--;
		}

		else {
			arr[++pos] = num;

			int pos1 = pos;
			while (arr[pos1] > arr[pos1 / 2] && arr[pos1 / 2]) {
				swap(arr[pos1], arr[pos1 / 2]);
				pos1 /= 2;
			}
		}
	}

	delete[] arr;

}
