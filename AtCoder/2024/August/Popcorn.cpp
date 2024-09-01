#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    vector<string> s(N);
    for (int i=0; i<N; i++) {
        cin >> s[i];
    }

    int ans = N;
    for (int c=1; c<(1 << N); c++) { // try every combination (there are 2^N combinations)
        int cnt = 0;
        vector<int> flv(M);
        for (int i=0; i<N; i++) {
            if ((c >> i) & 1) { // check if i bit is in c-th combination
                cnt++;
                for (int j=0; j<M; j++) {
                    if (s[i][j] == 'o') flv[j] = 1;
                }
            }
        }

        bool hasTastedAllFlavors = true;
        for (int x: flv) {
            if (x == 0) hasTastedAllFlavors = false;
        }
        if (hasTastedAllFlavors) ans = min(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}