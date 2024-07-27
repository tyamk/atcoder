#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;*/
/*
ブロック：{}
スコープ：変数が宣言されてからそのブロックが終わるまで
*/
int main() { // ブロック
  int x = 5; // xのスコープはこの行からmain関数のブロックの終わりまで
  
  if (x == 5){
    int y = 10; // yのスコープはこの行からif文のブロックの終わりまで
    cout << x + y << endl;
  }
  cout << x << endl;
  // cout << y << endl; 
  //yのスコープの外にあるのでエラーが出力される
}