#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	struct POS {
		int r, g, b;
	};

	POS* p = new POS[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i].r >> p[i].g >> p[i].b;
	}

	int r[1001] = { 0 }, g[1001] = { 0 }, b[1001] = { 0 };

	r[0] = p[0].r;
	g[0] = p[0].g;
	b[0] = p[0].b;


	for (int i = 1; i < n; i++) {
		r[i] = min(g[i-1], b[i-1]) + p[i].r;
		g[i] = min(r[i-1], b[i-1]) + p[i].g;
		b[i] = min(r[i-1], g[i-1]) + p[i].b;
	}

	int MIN = min(r[n - 1], g[n - 1]);

	cout << min(MIN, b[n - 1]);
	delete[] p;
}
