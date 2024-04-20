#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   cout << ((!is_sorted(a.begin(), a.end()) && k == 1) ? "NO" : "YES") << endl;
   
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