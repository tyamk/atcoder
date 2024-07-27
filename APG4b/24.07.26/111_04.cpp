#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */

int main() {

  for(int i = 0; i < 5; i++){
    if(i==3){
      cout << "とばす" << endl;
      continue; // i == 3のとき、これよりの後の処理を飛ばす
    }
    cout << i << endl;
  }
  cout << "終了" << endl;
}