#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;
    
    vector<int> a(N), c(8);
    for (int &ai: a) cin >> ai;

    int mn = 0, mx = 0;
    for (int x: a) {
        if (x < 3200 && !c[x / 400]) mn++, mx++, c[x / 400]++;
    }

    for (int x: a) {
        if (x >= 3200) mx++;
    }
    cout << max(1, mn) << " " << mx << endl;

    return 0;
}