#include <bits/stdc++.h>
using namespace std;
// 1円硬貨をA枚と500円硬貨を無限枚
// N円支払うことができるか

int main() {
    int x, A;
    cin >> x >> A;
    if(((x % 500) <= A)) cout << "Yes" << endl;
    else cout << "No" << endl;
}