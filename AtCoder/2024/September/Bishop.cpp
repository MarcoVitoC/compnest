#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll H, W;
    cin >> H >> W;

    cout << ((H == 1 || W == 1) ? 1 : (H * W + 1) / 2) << endl;

    return 0;
}