#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;*/

// たこ焼きプログラムを修正する
int main() {
  int p;
  cin >> p;
 
  // パターン2
  if (p == 2) {
    string text; // スコープの範囲がcin >> text >> priceまで
    cin >> text;
    //cout << 2 << endl;
    cout << text << "!" << endl;
    }
  int price , N;
  cin >> price >> N;
  cout << price * N << endl;
}