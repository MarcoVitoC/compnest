#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
   int n, m;
   cin >> n >> m;

   ll a[n], b[m];
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }
   for (int i=0; i<m; i++) {
      cin >> b[i];
   }

   ll aGcd = 0;
   for (int i=n-1; i>0; i--) {
      aGcd = __gcd(aGcd, abs(a[i] - a[0]));
   }

   for (int j=0; j<m; j++) {
      cout << __gcd(a[0] + b[j], aGcd) << " ";
   }
   cout << endl;
   
   return 0;
}