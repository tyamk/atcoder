/*C++入門 AtCoder Programming Guide for beginners（APG4b）
https://atcoder.jp/contests/apg4b/tasks/APG4b_e*/
// 複数の変数を同時に宣言→int a = 10, b = 5;
/*NG:
int 100hello; // 数字で始まる名前にはできない
int na+me; // 変数名に+を使うことはできない
int int; // intはキーワードなので変数名にできない
*/
// 型は合わせること

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 一年の秒数
  int seconds = 365 * 24 * 60 * 60;

  // 以下のコメント/* */を消して追記する
  cout << seconds * 1 << endl; // int * int
  cout << seconds * 2 << endl;
  cout << seconds * 5 << endl;
  cout << seconds * 10 << endl;
}
