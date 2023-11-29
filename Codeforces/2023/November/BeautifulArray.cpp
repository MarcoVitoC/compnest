#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n, k, b, s;
   cin >> n >> k >> b >> s;

   if (k * b > s) {
      cout << -1 << endl;
      return;
   }

   vector<ll> a(n);
   ll sum = k * b;
   a[n-1] = sum;
   for (int i=n-1; i>=0; i--) {
      a[i] += min(s - sum, k - 1);
      sum += min(s - sum, k - 1);
   }

   if (sum < s) {
      cout << -1 << endl;
      return;
   }

   for (ll num: a) {
      cout << num << " ";
   }
   cout << endl;
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