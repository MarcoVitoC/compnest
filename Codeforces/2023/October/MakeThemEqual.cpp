#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   char c;
   cin >> n >> c;

   string s;
   cin >> s;

   int diff = 0;
   for (int i=0; i<n; i++) {
      if (s[i] != c) diff++;
      if (i == n - 1 && diff == 0) {
         cout << 0 << endl;
         cout << endl;
         return;
      }
   }

   for (int i=n/2; i<n; i++) {
      if (s[i] == c) {
         cout << 1 << endl;
         cout << i + 1 << endl;
         return;
      }
   }

   cout << 2 << endl;
   cout << n << " " << n - 1 << endl;
}

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}