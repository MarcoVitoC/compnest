#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, a;
   cin >> n;

   int cntZero = 0, cntOne = 0;
   for (int i=0; i<n; i++) {
      cin >> a;

      if (a == 0) cntZero++;
      if (a == 1) cntOne++;
   }

   // number of ways to erase zeroes * number of ways to erase one 1
   cout << (1LL << cntZero) * cntOne << endl;
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