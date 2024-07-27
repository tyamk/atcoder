/*C++入門 AtCoder Programming Guide for beginners（APG4b）
https://atcoder.jp/contests/abc081/tasks/abc081_a*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    int counter = 0;

    for(char ch: input){
        if (ch == '1'){
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}



