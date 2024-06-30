#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }
   sort(a.begin(), a.end());
   
   int cnt = 1, mx = 1;
   for (int i=1; i<n; i++) {
      cnt = (abs(a[i] - a[i - 1]) > k) ? 1 : cnt + 1;
      mx = max(mx, cnt);
   }

   cout << n - mx << endl;
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