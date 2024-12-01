#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int R, G, B, N;
    cin >> R >> G >> B >> N;

    int ans = 0;
    for (int r=0; r<=N; r++) {
        for (int g=0; g<=N; g++) {
            int b = (N - (r * R) - (g * G)) / B;

            if ((r * R) + (g * G) == N) ans++;
            if (b > 0 && (r * R) + (g * G) + (b * B) == N) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}