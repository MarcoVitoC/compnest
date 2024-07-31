#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

ll f(ll n) {
    return n * (n - 1) / 2;
}

void solve() {
    int n, m;
    cin >> n >> m;

    int mx = n - m + 1; // put as many participants as possible in a group
    ll maxPairs = f(mx); // count the number of pairs that can be formed from that group

    int x = n / m + 1, y = n / m; // minimize the number of participants in each group by spread them as evenly as possible
    int gx = n % m; // number of groups that have x people
    int gy = m - (n % m); // the rest of the groups that have y people
    ll minPairs = gx * f(x) + gy * f(y); // count the number of pairs that can be formed from each group

    cout << minPairs << " " << maxPairs << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}