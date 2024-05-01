#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n;
   cin >> n;

   ll sum = n * (n + 1) / 2, powerOfTwoSum = 0;
   for (ll i=1; i<=n; i*=2) {
      powerOfTwoSum += i;
   }

   cout << sum - powerOfTwoSum * 2 << endl;
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