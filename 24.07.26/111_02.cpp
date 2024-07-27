#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */

int main() {
  int i = 0; // 初期化
  while(i < 3 /*条件式*/){
    cout << "Hello while" << j << endl; // 処理
    i++; // 更新
  }
  for (int i = 0 /*初期化*/; i < 3 /*条件式*/; i++/*更新*/){
    cout << "Hello for" << i << endl; // 処理
  }
}
// for文がiが1ずつ増えながらN回処理を繰り返す機能
// まずループを使わずにプログラムを書いて、そのあとにループで書き直すという方法が有効
