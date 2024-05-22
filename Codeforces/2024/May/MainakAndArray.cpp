#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   int ans = a[n - 1] - a[0]; // with no chosen subarray
   for (int i=1; i<n; i++) ans = max(ans, a[i - 1] - a[i]); // with chosen subarray contains all value
   for (int i=0; i<n-1; i++) ans = max(ans, a[n - 1] - a[i]); // with chosen subarray without a[n - 1]
   for (int i=1; i<n; i++) ans = max(ans, a[i] - a[0]); // with chosen subarray without a[0]

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