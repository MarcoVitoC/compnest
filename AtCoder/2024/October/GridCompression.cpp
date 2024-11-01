#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int H, W;
    cin >> H >> W;

    vector<string> a(H);
    for (int i=0; i<H; i++) {
        cin >> a[i];
    }

    vector<bool> r(H), c(W);
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (a[i][j] == '#') {
                r[i] = true;
                c[j] = true;
            }
        }
    }

    for (int i=0; i<H; i++) {
        if (!r[i]) continue;
        for (int j=0; j<W; j++) {
            if (!c[j]) continue;
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}