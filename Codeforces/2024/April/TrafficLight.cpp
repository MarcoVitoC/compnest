#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   char c;
   cin >> n >> c;

   string s;
   cin >> s;
   s += s;

   int ans = 0, len = s.size();
   for (int i=0; i<len; i++) {
      if (s[i] != c) continue;

      int cnt = 0;
      while (i < len && s[i] != 'g') i++, cnt++;

      ans = max(ans, cnt);
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