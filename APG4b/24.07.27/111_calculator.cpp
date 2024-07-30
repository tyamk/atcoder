#include <bits/stdc++.h>
using namespace std;
/* #include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>; */

int main() {
    int N, A;
    cin >> N >> A;
    for(int i = 0; i < N; ++i){
        // string B;
        string op; 
        // int B;
        int x;
        cin >> op >> x;
        if (op == "+"){
           A += x;
        }
        else if (op == "-")
        {
            A -= x;
        }
        else if (op == "*"){
            A *= x;
        }
        else if (op == "/" && x != 0){
            A /= x;
        }
        else if (op == "/" && x == 0){
            cout << "error" << endl;
            break; // /0のときは終了
        }
        cout << i + 1 << ":" << A << endl;

    }


}