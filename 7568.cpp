#include <iostream>

using namespace std;

struct B {
	int x, y;
};

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	B* b = new B[n];

	for (int i = 0; i < n; i++) {
		cin >> b[i].x >> b[i].y;
	}

	int* arr = new int[n];
	for (int i = 0; i < n; i++) arr[i] = 1;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if (b[i].x > b[j].x && b[i].y > b[j].y) arr[j]++;
			else if (b[i].x < b[j].x && b[i].y < b[j].y) arr[i]++;
		}
	}

	for (int i = 0; i < n; i++) cout << arr[i] << ' ';

}
