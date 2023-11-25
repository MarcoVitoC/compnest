#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   int n, q;
   cin >> n >> q;

   vector<int> a(n), t(q);
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }
   for (int i=0; i<q; i++) {
      cin >> t[i];
   }
   
   for (int i=0; i<q; i++) {
      int askedColorIdx = 0;
      for (int j=0; j<n; j++) {
         if (a[j] == t[i]) {
            askedColorIdx = j;
            cout << j + 1 << " ";
            break;
         }
      }
      for (int j=askedColorIdx-1; j>=0; j--) {
         a[j+1] = a[j];
      }
      a[0] = t[i];
   }

   return 0;
}