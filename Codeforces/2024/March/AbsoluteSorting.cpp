#include <bits/stdc++.h>
using namespace std;

int avg(int a, int b) {
   return ceil((a * 1.0 + b) / 2);
}

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   int x = 0;
   for (int i=0; i<n-1; i++) {
      if (a[i] > a[i + 1]) x = max(x, avg(a[i], a[i + 1]));
   }

   for (int &ai: a) ai = abs(ai - x);
   cout << ((is_sorted(a.begin(), a.end())) ? x : -1) << endl;
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