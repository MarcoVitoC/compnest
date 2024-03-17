#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, idx = 1;
   cin >> n;

   map<int, char> mp;
   for (char c='a'; c<='z'; c++) {
      mp[idx++] = c;
   }

   string ans = "aaa";
   n -= 3;
   for (int i=2; i>=0&&n>0; i--) {
      if (n < 26) {
         ans[i] = mp[n + 1];
         n -= n;
         continue;
      }

      ans[i] = mp[26];
      n -= 25;
   }
   cout << ans << endl;
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