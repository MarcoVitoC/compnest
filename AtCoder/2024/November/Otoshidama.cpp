#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, Y;
    cin >> N >> Y;

    for (int x=0; x<=N; x++) {
        for (int y=0; y<=N; y++) {
            int z = max(0, N - x - y);

            if (x + y + z != N) continue;
            if ((x * 10000) + (y * 5000) + (z * 1000) == Y) {
                printf("%d %d %d\n", x, y, z);
                return 0;
            }
        }
    }
    printf("%d %d %d\n", -1, -1, -1);

    return 0;
}