#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */

int main() {
    int N, K;
    cin >> N >> K;
    // 初項
    int x = 1;
    for(int i = 0; i < N; i++){
        if(x < K) {
            x *= 2;
        } else {
            x += K;
        }
    }
    cout << x << endl;
    return 0;
}