#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */
// breakとcontinueがある

int main() {
  // breakがなければこのループはi == 4まで繰り返す
  for (int i = 0; i < 5; i++){
    if(i == 3){
      cout << "ぬける" << endl;
      break; // i == 3の時点でループから抜ける
    }
    cout << i << endl;
  }
  cout << "終了" << endl;
}