#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int n;
   cin >> n;

   vector<int> x(n);
   for (int &xi: x) {
      cin >> xi;
   }
   sort(x.begin(), x.end());
   
   ll sum = 0;
   for (int i=0; i<n; i++) {
      if (x[i] > sum + 1) break;
      sum += x[i];
   }
   cout << sum + 1 << endl;

   return 0;
}