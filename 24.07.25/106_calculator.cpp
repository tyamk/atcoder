#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B; // opは演算子

  if (op == "+") cout << A+B << endl;
  else if (op == "-") cout << A-B << endl;
  else if (op == "*") cout << A * B << endl;
  else if (op == "/" && B != 0) cout << A / B << endl; // 条件は２つ
  else  cout << "error" << endl;
}