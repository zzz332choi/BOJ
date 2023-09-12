#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[301] = { 0 };
	for (int i = 1; i <= n; i++) cin >> arr[i];

	int dp[301] = { 0 };

	dp[1] = arr[1];
	dp[2] = arr[2] + arr[1];
	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

	for (int i = 4; i <= n; i++)
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i-1] + arr[i]);

	cout << dp[n];
}
