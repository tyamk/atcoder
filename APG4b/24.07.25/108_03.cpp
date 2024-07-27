#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;*/

int main() {
  int x = 5;
  cout << x << endl;

  if(x == 5) {
    cout << x << endl;
    string x = "hello"; // int x = 5のスコープと重なる
    cout << x << endl; // hello
  }
  
  cout << x << endl; // 5
}