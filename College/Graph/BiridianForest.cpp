#include <bits/stdc++.h>
using namespace std;

int r, c, dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
vector<vector<char>> forest;
vector<vector<int>> cost;

bool isInBound(int x, int y) {
   return x >= 0 && x < r && y >= 0 && y < c;
}

bool isBreeders(int x, int y) {
   return forest[x][y] >= '1' && forest[x][y] <= '9';
}

void bfs(pair<int, int> startPoint) {
   queue<pair<int, int>> qp;

   cost[startPoint.first][startPoint.second] = 0;
   qp.push({startPoint.first, startPoint.second});

   while (!qp.empty()) {
      pair<int, int> currPos = qp.front(); qp.pop();
      int x = currPos.first, y = currPos.second;

      for (int i=0; i<4; i++) {
         int nx = x + dx[i], ny = y + dy[i];

         if (isInBound(nx, ny) && cost[nx][ny] == -1 && forest[nx][ny] != 'T') {
            cost[nx][ny] = cost[x][y] + 1;
            qp.push({nx, ny});
         }
      }
   }
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   
   cin >> r >> c;

   pair<int, int> startPoint = {0, 0}, myPlayerPoint = {0, 0};
   forest.resize(r, vector<char>(c));
   cost.resize(r, vector<int>(c, -1));
   for (int i=0; i<r; i++) {
      for (int j=0; j<c; j++) {
         cin >> forest[i][j];

         if (forest[i][j] == 'E') startPoint = {i, j};
         if (forest[i][j] == 'S') myPlayerPoint = {i, j};
      }
   }

   bfs(startPoint);

   int myDistanceX = myPlayerPoint.first, myDistanceY = myPlayerPoint.second, ans = 0;
   for (int i=0; i<r; i++) {
      for (int j=0; j<c; j++) {
         if (isBreeders(i, j) && cost[i][j] != -1 && cost[i][j] <= cost[myDistanceX][myDistanceY]) {
            ans += (forest[i][j] - '0');
         }
      }
   }
   cout << ans << endl;
   
   return 0;
}