#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */

int main() {
  int x = 10;

  if(x == 5){
  int y = 10;  
  cout << x + y << endl;
  //string y = "hello"同じブロックに変数yがあるので宣言できない
  }
  if(x == 10){
    string y = "hello"; // ブロックが違うので変数yを宣言できる
    cout << x << y << endl;
  }
}