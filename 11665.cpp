#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int mx = 0, my = 0, mz = 0, Mx = 1000, My = 1000, Mz = 1000;

	for (int i = 0; i < n; i++) {
		int a, b, c, d, e, f;

		cin >> a >> b >> c >> d >> e >> f;

		mx = max(mx, a);
		my = max(my, b);
		mz = max(mz, c);

		Mx = min(Mx, d);
		My = min(My, e);
		Mz = min(Mz, f);
	}

	if (Mx > mx && My > my && Mz > mz) cout << (long long)((Mx - mx) * (My - my) * (Mz - mz));
	else cout << 0;
}
