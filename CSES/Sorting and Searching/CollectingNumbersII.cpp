#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m;
   cin >> n >> m;

   vector<int> x(n+5), pos(n+5);
   for (int i=1; i<=n; i++) {
      cin >> x[i];
      pos[x[i]] = i;
   }

   int round = 0;
   for (int i=1; i<=n; i++) {
      if (pos[i] > pos[i + 1]) round++;
   }

   int a, b;
   while (m--) {
      cin >> a >> b;

      set<pair<int, int>> sp;
      sp.insert({x[a] - 1, x[a]});
      sp.insert({x[a], x[a] + 1});
      sp.insert({x[b] - 1, x[b]});
      sp.insert({x[b], x[b] + 1});

      for (pair<int, int> p: sp) {
         if (pos[p.first] > pos[p.second]) round--;
      }

      swap(x[a], x[b]);
      swap(pos[x[a]], pos[x[b]]);

      for (pair<int, int> p: sp) {
         if (pos[p.first] > pos[p.second]) round++;
      }
      cout << round << endl;
   }

   return 0;
}