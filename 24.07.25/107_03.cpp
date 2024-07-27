#include <bits/stdc++.h>
using namespace std;
/*#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;*/

int main() {
  int x;
  cin >> x;

  bool a = true;
  bool b = x < 10; // xが10未満の時true そうでないときはfalse
  bool c = false;

  if(a && b){
    cout << "hello" << endl; // aとbの条件を満たすとき出力
  }
  if(c){
    cout << "world" << endl;
  }
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  bool a = 10; // 10はtrue
  bool b = 0; // 0はfalse
  cout << a << endl; // 1  trueを１にする
  cout << b << endl; // 0 　falseを0にする

  // 100はtrue
  if (100) {
    cout << "hello" << endl;
  }
}
*/