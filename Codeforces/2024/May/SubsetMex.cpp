#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, a;
   cin >> n;

   vector<int> cnt(100 + 5);
   for (int i=0; i<n; i++) {
      cin >> a;
      cnt[a]++;
   }

   int A = 0, B = 0;
   for (int i=0; i<=100; i++) {
      if (cnt[i] == 0) {
         A = i;
         break;
      }
   }
   for (int i=0; i<=100; i++) {
      if (cnt[i] <= 1) {
         B = i;
         break;
      }
   }
   cout << A + B << endl;
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