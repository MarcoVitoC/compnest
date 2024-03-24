#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }
   sort(a.begin(), a.end());

   int mid = (n % 2 != 0) ? n / 2 : n / 2 - 1, ans = 1;
   a[mid]++;
   for (int i=mid; i<n-1; i++) {
      if (a[i] > a[i + 1]) a[i + 1]++, ans++;
   }
   cout << ans << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}