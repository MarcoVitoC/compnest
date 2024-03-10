#include <bits/stdc++.h>
using namespace std;

void solve() {
   char c;
   int A = 0, B = 0, C = 0;
   for (int i=0; i<9; i++) {
      cin >> c;

      if (c == 'A') A++;
      if (c == 'B') B++;
      if (c == 'C') C++;
   }

   if (A == 2) cout << 'A' << endl;
   if (B == 2) cout << 'B' << endl;
   if (C == 2) cout << 'C' << endl;
}

int main() {
   int t;
   cin >> t;
   
   while (t--) {
      solve();
   }

   return 0;
}