#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e3, mxM = 1e3, INF = 1e9;

int n, m, cost[mxN+5][mxM+5], dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
char maze[mxN+5][mxM+5];
bool isVisited[mxN+5][mxM+5];
pair<int, int> direction[mxN+5][mxM+5];

bool isValidPath(int x, int y) {
   return x >= 0 && x < n && y >= 0 && y < m && (maze[x][y] == '.' || maze[x][y] == 'B');
}

void djikstra(int i, int j) {
   memset(isVisited, false, sizeof(isVisited));
   priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

   pq.push({0, {i, j}});
   cost[i][j] = 0;

   while (!pq.empty()) {
      pair<int, pair<int, int>> curr = pq.top(); pq.pop();
      pair<int, int> currPos = curr.second;
      int currCost = curr.first, x = currPos.first, y = currPos.second;

      if (maze[x][y] == 'B') return;

      isVisited[x][y] = true;
      for (int i=0; i<4; i++) {
         int nx = x + dx[i], ny = y + dy[i];

         if (isValidPath(nx, ny) && !isVisited[nx][ny] && currCost + 1 < cost[nx][ny]) {
            cost[nx][ny] = currCost + 1;
            direction[nx][ny] = {x, y}; // store the most optimal direction to go to {nx, ny} cell
            pq.push({cost[nx][ny], {nx, ny}});
         }
      }
   }
}

void getPath(pair<int, int> start, pair<int, int> end) {
   stack<char> path;
   pair<int, int> curr = end;

   while (curr != start) {
      pair<int, int> prevPath = direction[curr.first][curr.second];

      if (curr.first < prevPath.first) path.push('U');
      if (curr.first > prevPath.first) path.push('D');
      if (curr.second < prevPath.second) path.push('L');
      if (curr.second > prevPath.second) path.push('R');

      curr = prevPath;
   }

   while (!path.empty()) {
      cout << path.top();
      path.pop();
   }
   cout << endl;
}

void solve(pair<int, int> start, pair<int, int> end) {
   djikstra(start.first, start.second);

   if (cost[end.first][end.second] == INF) {
      cout << "NO" << endl;
      return;
   }

   cout << "YES" << endl;
   cout << cost[end.first][end.second] << endl;
   getPath(start, end);
}

int main() {
   cin >> n >> m;

   pair<int, int> start = {}, end = {};
   for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
         cin >> maze[i][j];
         cost[i][j] = INF;

         if (maze[i][j] == 'A') start = {i, j};
         if (maze[i][j] == 'B') end = {i, j};
      }
   }

   solve(start, end);

   return 0;
}