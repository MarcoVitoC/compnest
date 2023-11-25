#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, m;
   cin >> n >> m;

   vector<int> a(n*m);
   int inconvenience = 0;
   for (int i=0; i<n*m; i++) {
      cin >> a[i];

      for (int j=0; j<i; j++) {
         if (a[j] < a[i]) inconvenience++;
      }
   }

   cout << inconvenience << endl;

}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }
   return 0;
}