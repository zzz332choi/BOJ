#include <iostream>

using namespace std;

int main() {
  int arr[10] = {0};

  for(int i=0; i<5; i++){
    int num;
    cin >> num;
    arr[num]++;
  }

  for(int i=0; i<10; i++) if(arr[i] %2) cout << i;
}
