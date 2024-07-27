#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int counter = 1; 
  bool found = false;
  
  for (size_t i = 1; i < N.size(); i++) {
    if (N[i] == N[i - 1]) {
      counter++;
      if (counter >= 3) {
        found = true;
        break;
      }
    } else {
      counter = 1; 
    }
  }
  
  if (found) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
