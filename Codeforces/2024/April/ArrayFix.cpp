#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   for (int i=n-2; i>=0; i--) {
      if (a[i] <= a[i + 1] || a[i] / 10 == 0) continue;

      int lastDigit = a[i] % 10;
      if (lastDigit < a[i] / 10) {
         cout << "NO" << endl;
         return;
      }
      a[i] /= 10;

      a.insert(a.begin() + i + 1, lastDigit);
      if (is_sorted(a.begin(), a.end())) {
         cout << "YES" << endl;
         return;
      }
   }

   cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << endl;
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