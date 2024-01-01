#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<vector<char>> maze;
bool isVisited[505][505];

bool isInBound(int x, int y) {
   return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y) {
   if (!isInBound(x, y) || maze[x][y] != '.' || isVisited[x][y]) return;

   isVisited[x][y] = true;
   dfs(x - 1, y);
   dfs(x + 1, y);
   dfs(x, y - 1);
   dfs(x, y + 1);

   if (k > 0) {
      maze[x][y] = 'X';
      k--;
   }
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   
   cin >> n >> m >> k;

   maze.resize(n, vector<char>(m));
   memset(isVisited, false, sizeof(isVisited));
   for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
         cin >> maze[i][j];
      }
   }

   for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
         dfs(i, j);
      }
   }

   for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
         cout << maze[i][j];
      }
      cout << endl;
   }

   return 0;
}