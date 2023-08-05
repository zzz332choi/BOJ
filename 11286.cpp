#include <iostream>
#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int* arr = new int[2 * n + 2];

	for (int i = 0; i <= 2 * n + 1; i++) arr[i] = 0;

	int pos = 0;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		if (!num) { // delete
			cout << arr[1] << endl;
			arr[1] = 0;

			swap(arr[1], arr[pos]); // 가장 마지막 data를 root로 

			int pos1 = 1;

			while (1) {
				if (arr[pos1 * 2 + 1]) {
					if (abs(arr[pos1 * 2]) < abs(arr[pos1 * 2 + 1])) pos1 *= 2;
					else if (abs(arr[pos1 * 2]) == abs(arr[pos1 * 2 + 1]) && arr[pos1 * 2] < arr[pos1 * 2 + 1]) pos1 *= 2;
					else pos1 = pos1 * 2 + 1;
				}
				else pos1 *= 2;

				if (abs(arr[pos1]) < abs(arr[pos1 / 2]) && abs(arr[pos1])) swap(arr[pos1], arr[pos1 / 2]);
				else if (abs(arr[pos1]) == abs(arr[pos1 / 2]) && arr[pos1] < arr[pos1 / 2] && arr[pos1]) swap(arr[pos1], arr[pos1 / 2]);
				else break;
			}

			if (pos) pos--; // 삭제 후 data 수 감소 
		}

		else { // add
			arr[++pos] = num;

			int pos1 = pos; // 추가된 data의 위치

			while (abs(arr[pos1]) <= abs(arr[pos1 / 2]) && (pos1 / 2)) {
				if (abs(arr[pos1]) < abs(arr[pos1 / 2])) // 절댓값이 작은 경우
					swap(arr[pos1], arr[pos1 / 2]);
				else if (arr[pos1] < arr[pos1 / 2])  // 절댓값이 같은 경우
					swap(arr[pos1], arr[pos1 / 2]);
				else break; // 값이 같은 경우엔 swap을 종료
				pos1 /= 2;
			}
		}
	}

	delete[] arr;

}
