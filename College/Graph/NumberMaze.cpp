#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int N, M, dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
vector<vector<int>> maze, cost;

bool isInBound(int x, int y) {
   return x >= 0 && x < N && y >= 0 && y < M;
}

void bfs() {
   set<pair<int, pair<int, int>>> sp;

   cost[0][0] = maze[0][0];
   sp.insert({cost[0][0], {0, 0}});

   while (!sp.empty()) {
      pair<int, pair<int, int>> curr = *sp.begin(); sp.erase(sp.begin());
      int currCost = curr.first, x = curr.second.first, y = curr.second.second;

      for (int i=0; i<4; i++) {
         int nx = x + dx[i], ny = y + dy[i];
         if (isInBound(nx, ny) && cost[nx][ny] > currCost + maze[nx][ny]) {
            if (cost[nx][ny] != INF) sp.erase(sp.find({cost[nx][ny], {nx, ny}}));

            cost[nx][ny] = cost[x][y] + maze[nx][ny];
            sp.insert({cost[nx][ny], {nx, ny}});
         }
      }
   }
}

void solve() {
   cin >> N >> M;

   maze.resize(N, vector<int>(M));
   cost.resize(N, vector<int>(M, INF));
   for (int i=0; i<N; i++) {
      for (int j=0; j<M; j++) {
         cin >> maze[i][j];
      }
   }

   bfs();
   cout << cost[N-1][M-1] << endl;

   maze.clear();
   cost.clear();
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