#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, s_cnt = 0, t_cnt = 0;
	cin >> n;
	string str;

	for(int j=0; j<=n; j++) {
		getline(cin, str);

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 's' || str[i] == 'S') s_cnt++;
			else if (str[i] == 't' || str[i] == 'T') t_cnt++;
		}
	}

	if (s_cnt < t_cnt) cout << "English";
	else cout << "French";
}
