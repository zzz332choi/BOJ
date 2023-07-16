#include <iostream>
#include <string.h>

using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin >> n;

  char map[100][100] = {0};

  //for(int i=0; i<100; i++)
    //memset(map[i], '0', 100);
  
  for(int i=0; i<n; i++){
    int x, y;
    cin >> x >> y;
    for(int j=0; j<10; j++)   memset(map[x + j] + y, '1', 10);
  }

  int cnt = 0;
  
  for(int i=0; i<100; i++)
    for(int j=0; j<100; j++)      
      if(map[i][j]) cnt++;

  cout << cnt;
  
}
