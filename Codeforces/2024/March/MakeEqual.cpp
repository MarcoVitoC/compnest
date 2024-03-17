#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n, sum = 0;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
      sum += ai;
   }

   ll k = sum / n;
   for (int i=0; i<n-1; i++) {
      if (a[i] < k) {
         cout << "NO" << endl;
         return;
      }

      a[i + 1] += (a[i] - k);
      a[i] = k;
   }
   cout << "YES" << endl;
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