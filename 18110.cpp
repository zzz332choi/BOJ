#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (!n)
    cout << 0;

  else {
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
      cin >> arr[i];
    sort(arr, arr + n);

    double ex = (double)n * 0.15;
    ex = round(ex);

    int sum = 0;
    double avg;

    for (int i = ex; i < n - ex; i++)
      sum += arr[i];

    avg = (double)sum / (n - (2 * ex));

    cout << round(avg);

    delete[] arr;
  }
}
