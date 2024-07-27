#include <bits/stdc++.h>
using namespace std;
//&&:かつ
//論理演算子
//!(条件式)：条件式が偽
//(条件式１)&&(条件式2):どちらも真
//(条件式1)||(条件式2):少なくとも片方真

int main() {
  int x, y;
  cin >> x >> y;
  if(!(x==y)) cout << "xとyは等しくない" << endl;
  if(x == 10 && y == 10) cout << "xとyは10" << endl;
  if(x == 0 || y == 0) cout << "xかyは0" << endl;
  cout << "終了" << endl;
}