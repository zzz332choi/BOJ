#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    cin >> t;

    vector <int>v;

    while (t--) {
        char str[20] = { 0 };
        cin >> str;
        int n;

        if (!strcmp(str, "add")) {
            cin >> n;
            if (find(v.begin(), v.end(), n) == v.end()) v.push_back(n);

        }

        else if (!strcmp(str, "check")) {
            cin >> n;
            if (find(v.begin(), v.end(), n) == v.end()) cout << 0 << '\n';
            else cout << 1 << '\n';

        }

        else if (!strcmp(str, "remove")) {
            cin >> n;
            if (find(v.begin(), v.end(), n) != v.end()) {
                vector <int>::iterator iter = v.begin();
                iter += find(v.begin(), v.end(), n) - v.begin();
                v.erase(iter);
            }
            else continue;
        }

        else if (!strcmp(str, "toggle")) {
            cin >> n;
            if (find(v.begin(), v.end(), n) != v.end()) {
                vector <int>::iterator iter = v.begin();
                iter += find(v.begin(), v.end(), n) - v.begin();
                v.erase(iter);
            }
            else {
                v.push_back(n);
            }

        }

        else if (!strcmp(str, "all")) {
            v.clear();
            for (int i = 1; i <= 20; i++) v.push_back(i);
        }

        else if (!strcmp(str, "empty")) {
            v.clear();
        }

        sort(v.begin(), v.end());
     
    }
}
