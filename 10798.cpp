#include <iostream>
#include <string>

using namespace std;

int main() {
  char str[5][16] = { 0 };
  string str_;
  
  for(int i=0; i<5; i++) cin >> str[i];

  for(int i=0; i<16; i++)
    for(int j=0; j<5; j++)
      if(str[j][i])
        str_.append(1,str[j][i]);

  cout << str_;
}
