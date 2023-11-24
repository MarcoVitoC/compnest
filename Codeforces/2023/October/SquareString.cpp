#include <bits/stdc++.h>
using namespace std;

void solve() {
   string s;
   cin >> s;

   if (s.length() % 2 != 0) {
      cout << "NO" << endl;
      return;
   }

   int p1 = 0, p2 = s.length() / 2;
   while (p1 < s.length() / 2 && p2 < s.length()) {
      if (s[p1] != s[p2]) {
         cout << "NO" << endl;
         return;
      }
      p1++, p2++;
   }

   cout << "YES" << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}