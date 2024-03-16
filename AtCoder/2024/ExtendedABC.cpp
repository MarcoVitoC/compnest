#include <bits/stdc++.h>
using namespace std;

void solve() {
   string S;
   cin >> S;

   for (int i=0; i<S.length()-1; i++) {
      if (S[i] == 'B' && S[i + 1] == 'A') {
         cout << "No" << endl;
         return;
      }
      if (S[i] == 'C' && S[i + 1] != 'C') {
         cout << "No" << endl;
         return;
      }
   }

   cout << "Yes" << endl;
}

int main() {
   solve();

   return 0;
}