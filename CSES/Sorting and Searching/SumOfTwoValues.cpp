#include <bits/stdc++.h>
using namespace std;

void solve(int n, int x, vector<int>& a) {
   map<int, int> mp;
   for (int i=0; i<n; i++) {
      if (mp.count(x - a[i])) {
         cout << mp[x - a[i]] << " " << i + 1 << endl;
         return;
      }

      mp[a[i]] = i + 1;
   }

   cout << "IMPOSSIBLE" << endl;
}

int main() {
   int n, x;
   cin >> n >> x;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   solve(n, x, a);

   return 0;
}