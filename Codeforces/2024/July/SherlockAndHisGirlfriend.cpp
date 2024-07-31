#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    cout << ((n <= 2) ? 1 : 2) << endl;

    vector<int> ans(n + 5, 1);
    for (int i=2; i*i<=n+1; i++) { // sieve
        if (ans[i] == 1) {
            for (int j=i*i; j<=n+1; j+=i) {
                ans[j] = 2;
            }
        }
    }

    for (int i=2; i<=n+1; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}