#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for (auto &ai: a) cin >> ai;
    for (auto &bi: b) cin >> bi;
    
    int ans = 0;
    while (k > 0) {
        int need = 0;
        for (int i=0; i<n; i++) {
            if (b[i] >= a[i]) {
                b[i] -= a[i];
                continue;
            }
            
            need += a[i] - b[i];
            b[i] = 0;
        }

        if (need > k) break;
        ans++;
        k -= need;
    }
    cout << ans << endl;

    return 0;
}