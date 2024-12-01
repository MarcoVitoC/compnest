#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    int cnt0 = 0, cnt2 = 0;
    for (int i=0; i<N; i++) {
        int a;
        cin >> a;

        if (a % 4 == 0) cnt0++;
        else if (a % 4 == 2) cnt2++;
    }
    cout << ((cnt0 >= N / 2 || cnt2 >= N - cnt0 * 2) ? "Yes" : "No") << endl;

    return 0;
}