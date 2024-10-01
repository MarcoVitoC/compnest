#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    vector<int> X(N);
    for (int &Xi: X) cin >> Xi;

    int ans = 1e9;
    for (int i=1; i<=100; i++) {
        int total = 0;
        for (int x: X) {
            total += ((x - i) * (x - i));
        }
        ans = min(ans, total);
    }
    cout << ans << endl;

    return 0;
}