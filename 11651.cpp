#include <iostream>
#include <stdlib.h>

using namespace std;

struct pos {
	int xpos, ypos;
};

int static compare(const void* first, const void* second) {
	if ((*(pos*)first).ypos > (*(pos*)second).ypos) return 1;
	else if ((*(pos*)first).ypos < (*(pos*)second).ypos) return -1;
	else {
		if ((*(pos*)first).xpos > (*(pos*)second).xpos) return 1;
		else if ((*(pos*)first).xpos < (*(pos*)second).xpos) return -1;
		else return 0;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	pos* P = new pos[n];

	for (int i = 0; i < n; i++) cin >> P[i].xpos >> P[i].ypos;

	qsort(P, n, sizeof(P), compare);

	for (int i = 0; i < n; i++) cout << P[i].xpos << ' ' << P[i].ypos << '\n';

	delete[] P;
}