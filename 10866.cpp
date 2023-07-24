#include <deque>
#include <iostream>
#include <string>

#define endl '\n'

using namespace std;

int main() {
  int n;
  cin >> n;

  deque<int> deque_;

  while (n--) {
    string str;
    cin >> str;

    if (str == "push_front") {
      int num;
      cin >> num;

      deque_.push_front(num);
    }

    else if (str == "push_back") {
      int num;
      cin >> num;

      deque_.push_back(num);
    }

    else if (str == "pop_front") {
      if (deque_.empty())
        cout << -1 << endl;
      else {
        cout << deque_.front() << endl;
        deque_.pop_front();
      }
    }

    else if (str == "pop_back") {
      if (deque_.empty())
        cout << -1 << endl;
      else {
        cout << deque_.back() << endl;
        deque_.pop_back();
      }
    }

    else if (str == "size")
      cout << deque_.size() << endl;

    else if (str == "empty")
      cout << deque_.empty() << endl;

    else if (str == "front") {
      if (deque_.empty())
        cout << -1 << endl;
      else
        cout << deque_.front() << endl;
    }

    else if (str == "back") {
      if (deque_.empty())
        cout << -1 << endl;
      else
        cout << deque_.back() << endl;
    }
  }
}
