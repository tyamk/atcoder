#include <bits/stdc++.h>
using namespace std;
//&&:かつ
//||:もしくは
//if(条件式){処理}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  if((A * N) > B) cout << B << endl;
  else if ((A * N) < B) cout << A * N << endl;
  else if ((A * N) == B)  cout << A * N << endl;
}