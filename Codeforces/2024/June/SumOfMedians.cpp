#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   vector<int> a(n*k);
   for (int &ai: a) cin >> ai;

   ll median = n / 2, ans = 0;
   for (int i=0; i<k; i++) {
      ans += a[a.size() - ((i + 1) * (median + 1))]; // subtract size of array(a) with median index from the end
   }
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