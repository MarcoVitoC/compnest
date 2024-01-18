#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int, int>>> adj;
vector<bool> isVisited;

int djikstra(int start, int end) {
   priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

   pq.push({0, start});
   while (!pq.empty()) {
      pair<int, int> curr = pq.top(); pq.pop();
      int currDistance = curr.first, currDestination = curr.second;

      if (currDestination == end) return currDistance;

      isVisited[currDestination] = true;
      for (auto next: adj[currDestination]) {
         int nextDestination = next.first, nextDistance = next.second;

         if (!isVisited[nextDestination]) {
            pq.push({currDistance + nextDistance, nextDestination});
         }
      }
   }

   return -1;
}

int main() {
   int V, E, a, b;
   cin >> V >> E >> a >> b;

   adj.resize(V+1);
   isVisited.resize(V+1, false);
   
   for (int i=0; i<E; i++) {
      int x, y, z;
      cin >> x >> y >> z;

      adj[x].push_back({y, z});
      adj[y].push_back({x, z});
   }

   cout << djikstra(a, b) << endl;

   return 0;
}