#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> b(n);
   for (int i=0; i<n-1; i++) {
      cin >> b[i];
   }

   cout << b[0] << " ";
   for (int i=0; i<n-2; i++) {
      cout << min(b[i], b[i+1]) << " ";
   }
   cout << b[n-2] << endl;
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