#include <bits/stdc++.h>
using namespace std;

int H, W, N;
string T;
vector<vector<char>> grid;

bool isInBound(int x, int y) {
   return x >= 0 && x < H && y >= 0 && y < W;
}

bool isValidPath(pair<int, int> start, string T) {
   int x = start.first, y = start.second;

   for (char move: T) {
      if (!isInBound(x, y) || grid[x][y] == '#') return false;

      if (move == 'L') y--;
      if (move == 'R') y++;
      if (move == 'U') x--;
      if (move == 'D') x++;
   }

   return grid[x][y] == '.';
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   cin >> H >> W >> N >> T;

   grid.resize(H, vector<char>(W));
   for (int i=0; i<H; i++) {
      for (int j=0; j<W; j++) {
         cin >> grid[i][j];
      }
   }

   int ans = 0;
   for (int i=0; i<H; i++) {
      for (int j=0; j<W; j++) {
         if (isValidPath({i, j}, T)) ans++;
      }
   }
   cout << ans << endl;

   return 0;
}