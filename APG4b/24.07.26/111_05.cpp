#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */

int main() {

  int j = 0; // jのスコープはmain関数の終わりまで
  while(j < 3){
    cout << "Hello while" << endl;
    j ++;
  }

  for(int i = 0; i < 3; i++){ // iのスコープはforの終わりまで
    cout << "Hello for" << endl;
  }
  cout << j << endl;
  cout << i << endl; //‘i’ was not declared in this scope
}