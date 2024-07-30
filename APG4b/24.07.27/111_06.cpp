#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */

int main() {
  for(int i = 0; i < 5; i++){
    if(i == 3){
      cout << "forをとばす" << endl;
      continue;
    }
  cout << "for" << i << endl;
  }
  cout << "for終了" << endl;
  int j = 0;
  while(j < 5){
    if(j == 3){
      cout << "whileとばす" << endl;
      continue;
    }
    cout << "while" << j << endl;
    j++; // coninueにより動作が飛ばされる
  }
  cout << "while終了" << endl;
}
