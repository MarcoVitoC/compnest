#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n, k, x;
   cin >> n >> k >> x;

   ll minKSum = (k * (k + 1)) / 2;
   ll maxKSum = ((n * (n + 1)) - ((n - k) * (n - k + 1))) / 2;

   cout << ((x >= minKSum && x <= maxKSum) ? "YES" : "NO") << endl;
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