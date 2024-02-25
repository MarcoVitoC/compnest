#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   int p1 = 0, p2 = n - 1;
   for (int i=0; i<n-1; i++) {
      if (a[i] >= a[i + 1]) break;
      p1++;
   }
   for (int i=n-1; i>0; i--) {
      if (a[i] >= a[i - 1]) break;
      p2--;
   }

   for (int i=p1; i<p2; i++) {
      if (a[i] != a[i + 1]) {
         cout << "NO" << endl;
         return;
      }
   }

   cout << "YES" << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}