#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, xi;
   cin >> n;

   vector<int> x(n+5);
   for (int i=1; i<=n; i++) {
      cin >> xi;
      x[xi] = i; // put the inputted value as the location of increasing values from 1 to n    
   }

   int round = 0;
   for (int i=1; i<=n; i++) {
      if (x[i] > x[i + 1]) round++; // if the bigger number position lies before the smaller number
   }
   cout << round << endl;

   return 0;
}