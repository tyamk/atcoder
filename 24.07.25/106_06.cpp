#include <bits/stdc++.h>
using namespace std;
//if文のネスト

int main() {
  int x, y ;
  cin >> x >> y;
  if(x == 10){
    cout << "xは10" << endl;
    if(y == 10){
      cout << "yも10" << endl;
    }
  }
  cout << "終了" << endl;
}