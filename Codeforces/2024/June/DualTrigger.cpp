#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n;
   cin >> n;

   string s;
   cin >> s;

   int len = s.length(), cntOne = 0, minIdx = n, maxIdx = 0;
   for (int i=0; i<len; i++) {
      if (s[i] == '1') {
         cntOne++;
         minIdx = min(minIdx, i);
         maxIdx = max(maxIdx, i);
      }
   }

   cout << ((cntOne % 2 != 0 || maxIdx - minIdx == 1) ? "NO" : "YES") << endl;
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