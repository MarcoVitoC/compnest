#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> ans;
    while (n) {
        int x = n, m = 0, p = 1;
        while (x) {
            if (x % 10) m += p;
            x /= 10, p *= 10;
        }

        n -= m;
        ans.push_back(m);
    }

    cout << ans.size() << endl;
    for (int x: ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}