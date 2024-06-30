#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   string s;
   cin >> s;

   string ans = s;
   int len = s.length();
   for (int i=0; i<len-1; i++) {
      swap(ans[i], ans[i + 1]);
   }
   
   if (ans == s || len == 1) {
      cout << "NO" << endl;
      return;
   }
   
   cout << "YES" << endl;
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