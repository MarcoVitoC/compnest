#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   string s;
   cin >> s;

   vector<int> distFreqLeftToRight(n), distFreqRightToLeft(n);
   set<char> st;
   for (int i=0; i<n; i++) {
      st.insert(s[i]);
      distFreqLeftToRight[i] = st.size();
   }
   st.clear();
   for (int i=n-1; i>=0; i--) {
      st.insert(s[i]);
      distFreqRightToLeft[i] = st.size();
   }

   int ans = 0;
   for (int i=0; i<n-1; i++) {
      int a = min(distFreqLeftToRight[i], distFreqRightToLeft[0]);
      int b = min(distFreqLeftToRight[n - 1], distFreqRightToLeft[i + 1]);

      ans = max(ans, a + b);
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