#include <bits/stdc++.h>
using namespace std;
//&&:かつ
//||:もしくは
//if(条件式){処理}

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  if ((A+B)>(C+D)) cout << "Left" << endl;
  else if ((A+B)<(C+D)) cout << "Right" << endl;
  else if ((A+B)==(C+D)) cout << "Balanced" << endl;
}