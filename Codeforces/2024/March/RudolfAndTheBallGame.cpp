#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, m, x, r;
   char c;
   cin >> n >> m >> x;

   set<int> s, t;
   s.insert(x);
   while (m--) {
      cin >> r >> c;

      t.clear();
      while (!s.empty()) {
         int si = *s.begin();
         int cPos = (si + r - 1) % n + 1;
         int ccPos = (si - r - 1 + n) % n + 1;
         s.erase(si);

         if (c == '0' || c == '?') t.insert(cPos);
         if (c == '1' || c == '?') t.insert(ccPos);
      }
      s.insert(t.begin(), t.end());
   }

   cout << s.size() << endl;
   for (auto &si: s) {
      cout << si << " ";
   }
   cout << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}