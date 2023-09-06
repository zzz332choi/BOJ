#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int arr[100001] = { 0 };
bool visited[100001] = { 0 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;
	int n, k;
	cin >> n >> k;

	int cnt = 0;

	q.push(n);
	visited[n] = 1;
	arr[n] = 1;

	while (!q.empty()) {
		int num = q.front();
		q.pop();

		int a = num + 1, b = num - 1, c = num * 2;

		if (0 <= a && a <= 100000) if (!arr[a]) {
			q.push(a);
			arr[a] = arr[num] + 1;
		}

		if (0 <= b && b <= 100000) if (!arr[b]) {
			q.push(b);
			arr[b] = arr[num] + 1;
		}

		if (0 < c && c <= 100000) if (!arr[c]) {
			q.push(c);
			arr[c] = arr[num] + 1;
		}
	}

	q.push(k);

	while(!q.empty()){
		int num = q.front();
		q.pop();

		if (num == n) cnt++;

		else {
			int a = num + 1, b = num - 1, c = 0;
			if (num % 2 == 0) c = num / 2;
			
			if (0 <= a && a <= 100000) if (arr[a] == arr[num] - 1) {
				q.push(a);
			}

			if (0 <= b && b <= 100000) if (arr[b] == arr[num] - 1) {
				q.push(b);
			}

			if (0 < c && c <= 100000) if (arr[c] == arr[num] - 1) {
				q.push(c);
			}
		}

	}

	cout << arr[k] - 1 << endl << cnt;
}

