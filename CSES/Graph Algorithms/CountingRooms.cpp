#include <bits/stdc++.h>
using namespace std;

int n, m, dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
vector<vector<char>> building;

bool isInBound(int x, int y) {
   return x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(int i, int j) {
   queue<pair<int, int>> qp;
   qp.push({i, j});

   while (!qp.empty()) {
      pair<int, int> currPos = qp.front(); qp.pop();
      int x = currPos.first, y = currPos.second;

      if (building[x][y] != '.') continue;
      building[x][y] = 'X';

      for (int i=0; i<4; i++) {
         int nx = x + dx[i], ny = y + dy[i];

         if (isInBound(nx, ny) && building[nx][ny] == '.') {
            qp.push({nx, ny});
         }
      }
   }
}

int main() {
   cin >> n >> m;

   building.resize(n, vector<char>(m));
   for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
         cin >> building[i][j];
      }
   }

   int room = 0;
   for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
         if (building[i][j] == '.') {
            bfs(i, j);
            room++;
         }
      }
   }
   cout << room << endl;

   return 0;
}