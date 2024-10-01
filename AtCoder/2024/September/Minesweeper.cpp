#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

bool isInBound(int H, int W, int x, int y) {
    return x >= 0 && x < H && y >= 0 && y < W;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            cin >> grid[i][j];
        }
    }

    int dx[] = {-1, 1, 0, 0, -1, 1, -1, 1}, dy[] = {0, 0, -1, 1, -1, -1, 1, 1};
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (grid[i][j] == '#') continue;

            int m = 0;
            for (int k=0; k<8; k++) {
                int nx = i + dy[k], ny = j + dx[k];
                if (isInBound(H, W, nx, ny) && grid[nx][ny] == '#') m++;
            }
            grid[i][j] = m + '0';
        }
    }

    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}