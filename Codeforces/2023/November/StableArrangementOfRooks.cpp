#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, k;
      cin >> n >> k;

   if (n - (n / 2) < k) {
      cout << -1 << endl;
      return;
   }

   int r = 0;
   for (int i=0; i<n; i++) {
      if (i % 2 != 0) {
         for (int j=0; j<n; j++) {
            cout << ".";
         }
         cout << endl;
      } else {
         if (r != k) {
            for (int j=0; j<n; j++) {
               cout << (j == i ? "R" : ".");
            }
            cout << endl;
            r++;
         } else {
            for (int j=0; j<n; j++) {
               cout << ".";
            }
            cout << endl;
         }
      }
   }
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}