#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   int a[n];
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }

   int minDiff = INT_MAX, firstSoldierIdx = 0, secondSoldierIdx = 0;
   for (int i=0; i<n-1; i++) {
      if (abs(a[i] - a[i+1]) < minDiff) {
         minDiff = abs(a[i] - a[i+1]);
         firstSoldierIdx = i + 1;
         secondSoldierIdx = i;
      }
   }

   if (abs(a[n-1] - a[0]) < minDiff) {
      minDiff = abs(a[n-1] - a[0]);
      firstSoldierIdx = n - 1;
      secondSoldierIdx = 0;
   }

   cout << firstSoldierIdx + 1 << " " << secondSoldierIdx + 1 << endl;

   return 0;
}