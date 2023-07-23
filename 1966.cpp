#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define endl '\n'

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		int n, m, cnt = 1;
		cin >> n >> m;

		queue <int> queue_;
		vector <int> vector_;

		int num, mth;

		for (int i = 0; i < n; i++) {
			cin >> num;
			queue_.push(num);
			vector_.push_back(num);

			if (i == m) mth = num;
		}

		sort(vector_.begin(), vector_.end(), greater<>()); // 내림차순 정렬 

		while (!queue_.empty()) {
			while (queue_.front() != vector_.front()) {
				queue_.push(queue_.front());
				queue_.pop();

				m--;
				if (m < 0) m = queue_.size() - 1;
				//cout << '\t' << m << endl;
			}



			if (!m && queue_.front() == mth) {
				cout << cnt << endl;
				break;
			}

			else {
				queue_.pop();
				vector_.erase(vector_.begin());
				cnt++;
				m--;
			}

		}

	}
}
