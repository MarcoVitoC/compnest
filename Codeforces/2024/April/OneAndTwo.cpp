#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n), cnt(n);
   for (int &ai: a) {
      cin >> ai;
   }

   cnt[0] = (a[0] == 2);
   for (int i=1; i<n; i++) { // count the number of numbers 2 from each index
      cnt[i] = cnt[i - 1] + (a[i] == 2);
   }

   for (int i=0; i<n-1; i++) { // compare the total number of numbers 2 on the left and right sides
      if (cnt[i] == cnt[n - 1] - cnt[i]) {
         cout << i + 1 << endl;
         return;
      }
   }

   cout << -1 << endl;
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