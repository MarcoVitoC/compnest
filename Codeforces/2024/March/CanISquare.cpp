#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, a;
   cin >> n;

   ll sum = 0;
   for (int i=0; i<n; i++) {
      cin >> a;
      sum += a;
   }

   double sq = sqrt(sum);
   cout << ((sq - (int)sq == 0) ? "YES" : "NO") << endl;
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