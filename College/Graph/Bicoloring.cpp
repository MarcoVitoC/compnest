#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int>>& adj, vector<bool>& isVisited, vector<int>& color) {
   queue<int> q;

   q.push(0);
   isVisited[0] = true;
   color[0] = 1;

   while (!q.empty()) {
      int curr = q.front(); q.pop();

      for (auto next: adj[curr]) {
         if (color[next] == color[curr]) return false;

         if (!isVisited[next]) {
            isVisited[next] = true;
            color[next] = color[curr] * (-1);
            q.push(next);
         }
      }
   }

   return true;
}

int main() {
   ios_base::sync_with_stdio(0);
   cout.tie(0); cout.tie(0);

   int n, l, u, v;

   while (cin >> n && n != 0) {
      cin >> l;

      vector<vector<int>> adj(l+5);
      vector<bool> isVisited(n+5);
      vector<int> color(n+5);

      while (l--) {
         cin >> u >> v;
         adj[u].push_back(v);
         adj[v].push_back(u);
      }

      bool isBicolorable = bfs(adj, isVisited, color);
      cout << ((isBicolorable) ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
   }

   return 0;
}