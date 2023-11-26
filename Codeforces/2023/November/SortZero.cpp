#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   map<int, vector<int>> mp; // store the indices of every occurrence  of a value
   for (int i=0; i<n; i++) {
      cin >> a[i];
      mp[a[i]].push_back(i);
   }

   set<int> s; // store the indices if a value is bigger than the next value
   for (int i=0; i<n-1; i++) {
      if (a[i] > a[i+1]) s.insert(i);
   }
   
   int ans = 0;
   while (!s.empty()) {
      int badIdx = *s.begin();
      int x = (a[badIdx] != 0) ? a[badIdx] : a[badIdx + 1];

      for (int idx: mp[x]) {
         a[idx] = 0; // change the value to 0 since it was bigger than the next value
         s.erase(idx);

         if (idx > 0 && a[idx - 1] > a[idx]) s.insert(idx - 1); // check if the previous value is bigger or not
         if (idx < n - 1 && a[idx] > a[idx + 1]) s.insert(idx); // check if the next value is smaller or not
      }

      ans++;
   }

   cout << ans << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();   
   }

   return 0;
}