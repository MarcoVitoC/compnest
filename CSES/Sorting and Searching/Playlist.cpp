#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   vector<int> k(n);
   for (int &ki: k) {
      cin >> ki;
   }

   int ans = 0;
   map<int, int> mp;
   for (int i=0, j=0; i<n; i++) {
      j = max(mp[k[i]], j); // update j based on previous occurrence
      ans = max(ans, i - j + 1); // update the maximum length
      mp[k[i]] = i + 1; // store the index of current k[i]
   }
   cout << ans << endl;

   return 0;
}