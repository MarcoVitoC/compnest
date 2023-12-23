#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }
   
   cout << ((n % 2 == 0 || (n % 2 != 0 && a[0] % 2 == 0 || a[n-1] % 2 == 0)) ? "No" : "Yes") << endl;

   return 0;
}