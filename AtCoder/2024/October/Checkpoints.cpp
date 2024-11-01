#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> s(N), cp(M);
    for (auto &si: s) cin >> si.first >> si.second;
    for (auto &cpi: cp) cin >> cpi.first >> cpi.second;

    for (int i=0; i<N; i++) {
        ll minDist = INT_MAX, ans = 0;
        for (int j=0; j<M; j++) {
            ll currDist = abs(s[i].first - cp[j].first) + abs(s[i].second - cp[j].second);
            if (currDist < minDist) {
                minDist = currDist;
                ans = j + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}