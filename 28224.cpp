#include <iostream>

using namespace std;

int main(){
  int sum=0, n, a;
  cin >> n;
  while(n--){
    cin >> a;
    sum += a;
  }
  cout << sum;
}
