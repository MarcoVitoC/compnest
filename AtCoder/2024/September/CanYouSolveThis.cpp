#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M, C;
    cin >> N >> M >> C;

    vector<int> B(M);
    for (int &Bi: B) cin >> Bi;

    int A, ans = 0;
    for (int i=0; i<N; i++) {
        int x = 0;
        for (int j=0; j<M; j++) {
            cin >> A;
            x += (A * B[j]);
        }
        x += C;
        if (x > 0) ans++;
    }
    cout << ans << endl;

    return 0;
}