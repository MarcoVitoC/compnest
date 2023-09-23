#include <bits/stdc++.h>

using namespace std;

void solve() {
   int n;
   cin >> n;

   int a[n], minIndex = 0, maxIndex = 0;
   for (int i=0; i<n; i++) {
      cin >> a[i];
      minIndex = (a[i] < a[minIndex]) ? i : minIndex;
      maxIndex = (a[i] > a[maxIndex]) ? i : maxIndex;
   }

   cout << min({
      max(minIndex, maxIndex) + 1, // destroy from the left until both stones are destroyed
      (n - 1) - min(minIndex, maxIndex) + 1, // destroy from the right until both stones are destroyed
      // destroy from the left until the lowest are destroyed, and destroy from the right until the greatest are destroyed
      (minIndex + 1) + ((n - 1) - maxIndex + 1), 
      // destroy from the left until the greatest are destroyed, and destroy from the right until the lowest are destroyed
      (maxIndex + 1) + ((n - 1) - minIndex + 1),
   }) << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}