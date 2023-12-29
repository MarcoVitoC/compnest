#include <bits/stdc++.h>
using namespace std;

int R, C, m, bx, by, n, jx, jy, L;
int forest[205][205], dist[205][205], dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};

bool isInBound(int x, int y) {
   return x >= 1 && x <= R && y >= 1 && y <= C;
}

int diagonalDistance(int a, int b) { // pythagoras
   return (a * a) + (b * b);
}

int bfs() {
   queue<pair<int, int>> qp;
   
   dist[1][1] = 0;
   qp.push({1, 1});

   while (!qp.empty()) {
      pair<int, int> currPos = qp.front(); qp.pop();
      int x = currPos.first, y = currPos.second;

      if (x == R && y == C) return dist[x][y];
      
      for (int i=0; i<4; i++) {
         int nx = x + dx[i], ny = y + dy[i];

         if (isInBound(nx, ny) && dist[nx][ny] == -1 && forest[nx][ny] != -1) {
            dist[nx][ny] = dist[x][y] + 1;
            qp.push({nx, ny});
         }
      }
   }

   return -1;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   while (1) {
      cin >> R >> C;

      if (R == 0 && C == 0) break;

      memset(forest, 0, sizeof(forest));
      memset(dist, -1, sizeof(dist));

      cin >> m;
      while (m--) {
         cin >> bx >> by;
         forest[bx][by] = -1;
      }

      cin >> n;
      while (n--) {
         cin >> jx >> jy >> L;

         for (int i=jx-L; i<=jx+L; i++) {
            for (int j=jy-L; j<=jy+L; j++) {
               if (isInBound(i, j) && L * L >= diagonalDistance(jx - i, jy - j)) {
                  forest[i][j] = -1;
               }
            }
         }
      }

      int shortestPath = bfs();
      if (shortestPath == -1) {
         cout << "Impossible." << endl;
         continue;
      }

      cout << shortestPath << endl;
   }

   return 0;
}
