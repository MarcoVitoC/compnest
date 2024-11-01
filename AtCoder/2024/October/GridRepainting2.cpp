#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

bool isInBound(int x, int y, int H, int W) {
    return x >= 0 && x < H && y >= 0 && y < W;
}

bool hasAdjacent(int i, int j, int H, int W, vector<string> s) {
    if (isInBound(i + 1, j, H, W) && s[i + 1][j] == '#') return true;
    if (isInBound(i - 1, j, H, W) && s[i - 1][j] == '#') return true;
    if (isInBound(i, j + 1, H, W) && s[i][j + 1] == '#') return true;
    if (isInBound(i, j - 1, H, W) && s[i][j - 1] == '#') return true;

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int H, W;
    cin >> H >> W;

    vector<string> s(H);
    for (int i=0; i<H; i++) {
        cin >> s[i];
    }

    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (s[i][j] == '.') continue;
            if (!hasAdjacent(i, j, H, W, s)) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}