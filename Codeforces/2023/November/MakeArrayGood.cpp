#include <bits/stdc++.h>
using namespace std;

int findGreaterOrEqual(int x) {
   int num = 1;
   while (num <= x) {
      num *= 2;
   }

   return num;
}

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }

   cout << n << endl;
   for (int i=0; i<n; i++) {
      cout << i + 1 << " " << findGreaterOrEqual(a[i]) - a[i] << endl;
   }
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