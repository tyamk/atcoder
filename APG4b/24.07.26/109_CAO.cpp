#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  x++;
  cout << x << endl;
  x *= a + b;
  cout << x << endl;
  x *= x;
  cout << x << endl;
  x--;
  cout << x << endl;
  return 0;
  
}