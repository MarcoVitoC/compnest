#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, c = 0;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
      c += ai;
   }

   // min number of operations = size of subarray of all chips - total number of chips
   int l = 0, r = n - 1;
   while (l < n && a[l] != 1) l++;
   while (r >= 0 && a[r] != 1) r--;

   cout << (r - l + 1) - c << endl;
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