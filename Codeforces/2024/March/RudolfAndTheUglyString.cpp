#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   string s;
   cin >> s;

   int ans = 0;
   for (int i=1; i<n-1; i++) {
      if (s[i] == 'a' && s[i - 1] == 'm' && s[i + 1] == 'p') ans++, i+=2;
      else if (s[i] == 'i' && s[i - 1] == 'p' && s[i + 1] == 'e') ans++, i+=2;
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