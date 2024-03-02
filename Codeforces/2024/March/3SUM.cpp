#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, a;
   cin >> n;

   vector<int> b, cnt(10, 0);
   for (int i=0; i<n; i++) {
      cin >> a;

      if (cnt[a % 10] < 3) {
         b.push_back(a % 10);
         cnt[a % 10]++;
      }
   }

   for (int i=0; i<b.size()-2; i++) {
      for (int j=i+1; j<b.size()-1; j++) {
         for (int k=j+1; k<b.size(); k++) {
            if ((b[i] + b[j] + b[k]) % 10 == 3) {
               cout << "YES" << endl;
               return;
            }
         }
      }
   }

   cout << "NO" << endl;
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