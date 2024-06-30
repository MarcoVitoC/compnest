#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   string s;
   cin >> s;

   int len = s.length(), ans = 1;
   bool hasMixBlock = false;
   for (int i=0; i<len-1; i++) {
      ans += (s[i] != s[i + 1]);
      hasMixBlock |= (s[i] == '0' && s[i + 1] == '1');
   }
   cout << ans - hasMixBlock << endl;
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