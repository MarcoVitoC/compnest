#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

bool isInline(int x1, int x2, int x3, int y1, int y2, int y3) {
    return ((x2 - x1) * (y3 - y1)) == ((x3 - x1) * (y2 - y1));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, x0, y0;
    cin >> n >> x0 >> y0;

    vector<pair<int, int>> vp(n);
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> vp[i].first >> vp[i].second;
        v[i] = i;
    }

    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (isInline(x0, vp[i].first, vp[j].first, y0, vp[i].second, vp[j].second)) {
                v[j] = v[i];
            }
        }
    }

    sort(all(v));
    int ans = 1;
    for (int i=1; i<n; i++) {
        if (v[i] != v[i - 1]) ans++;
    }
    cout << ans << endl;

    return 0;
}