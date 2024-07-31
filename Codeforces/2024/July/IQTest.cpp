#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, a;
    cin >> n;

    vector<vector<int>> v(2);
    for (int i=1; i<=n; i++) {
        cin >> a;
        v[a % 2].push_back(i);
    }
    cout << ((v[0].size() > v[1].size()) ? v[1][0] : v[0][0]) << endl;

    return 0;
}