#include <bits/stdc++.h>
using namespace std;
//&&:かつ
//||:もしくは
//if(条件式){処理}

int main() {
  int a, b;
  cin >> a >> b;
  if(((a % 2)!= 0) && ((b % 2) != 0)) cout << "Odd" << endl;
  else cout << "Even" << endl;
}