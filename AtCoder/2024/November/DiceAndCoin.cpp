#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K;
    cin >> N >> K;

    double ans = 0;
    for (int i=1; i<=N; i++) {
        double chance = 1, x = i;
        while (x < K) {
            x *= 2;
            chance *= 0.5;
        }
        ans += chance / N;
    }
    printf("%.12f\n", ans);

    return 0;
}