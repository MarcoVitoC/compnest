#include <iostream>

using namespace std;

void solve() {
   int n;
   cin >> n;

   int a[n], sum = 0;
   for (int i=0; i<n; i++) {
      cin >> a[i];
      sum += a[i];
   }

   int minNumToAppend = (sum < n) ? 1 : sum - n;
   cout << minNumToAppend << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}