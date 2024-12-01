#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int d, sumTime, mn = 0, mx = 0;
    cin >> d >> sumTime;

    vector<int> minTime(d), maxTime(d);
    for (int i=0; i<d; i++) {
        cin >> minTime[i] >> maxTime[i];

        mn += minTime[i];
        mx += maxTime[i];
    }

    if (sumTime < mn || sumTime > mx) {
        cout << "NO" << endl;
        return 0;
    }

    int diff = sumTime - mn;
    cout << "YES" << endl;
    for (int i=0; i<d; i++) {
        int k = maxTime[i] - minTime[i];
        minTime[i] += min(diff, k);
        diff -= min(diff, k);

        cout << minTime[i] << " ";
    }
    cout << endl;

    return 0;
}