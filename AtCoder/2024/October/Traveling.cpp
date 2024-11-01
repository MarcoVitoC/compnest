#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    vector<int> t(N), x(N), y(N);
    for (int i=0; i<N; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    int currT = 0, currX = 0, currY = 0;
    for (int i=0; i<N; i++) {
        int cost = abs(x[i] - currX) + abs(y[i] - currY);
        int diffT = abs(t[i] - currT);

        if (cost > diffT || (diffT - cost) % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
        currT = t[i];
        currX = x[i];
        currY = y[i];
    }
    cout << "Yes" << endl;

    return 0;
}