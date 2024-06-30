#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   string s;
   cin >> s;

   map<char, int> mp;
   for (char c: s) {
      mp[c]++;
   }

   int oddOccurrence = 0;
   for (auto [c, cnt]: mp) {
      while (k > 0 && cnt > 0 && cnt % 2 != 0) cnt--, k--;
      if (cnt % 2 != 0) oddOccurrence++;
   }
   cout << ((oddOccurrence > 1) ? "NO" : "YES") << endl;
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