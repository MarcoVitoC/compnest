#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n;
   cin >> n;

   string s;
   cin >> s;

   int odd = 0;
   for (char c: s) {
      if ((c - '0') % 2 != 0) odd++;
   }

   if (odd <= 1) {
      cout << -1 << endl;
      return;
   }

   string ans = "";
   for (char c: s) {
      if (ans.length() >= 2) break;
      if ((c - '0') % 2 != 0) ans += c;
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