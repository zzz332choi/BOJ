#include <iostream>
#include <string>

using namespace std;

int main(){
  double sum = 0, cnt = 0;

  for(int i=0; i<20; i++){
    string score, Class;
    double abc, score_;
    cin >> Class >> abc >> score;
    
    cnt+=abc;

    if(score == "A+") sum += abc * 4.5;
    else if(score == "A0") sum += abc *  4;
    else if(score == "B+") sum += abc * 3.5;
    else if(score == "B0") sum += abc *  3;
    else if(score == "C+") sum += abc *  2.5;
    else if(score == "C0") sum += abc * 2;
    else if(score == "D+") sum += abc * 1.5;
    else if(score == "D0") sum += abc *  1;
    else if(score == "F") sum += abc * 0;
    else if(score == "P") cnt -= abc;;

  }

  cout<<fixed;
  cout.precision(5);
  cout << sum / cnt;
}
