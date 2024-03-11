#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   string s;
   cin >> n >> s;

   int l = 0, r = n - 1;
   while (s[l] != 'B') l++;
   while (s[r] != 'B') r--;

   cout << r - l + 1 << endl;
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