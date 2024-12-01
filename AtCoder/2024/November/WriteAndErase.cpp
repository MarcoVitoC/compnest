#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    map<int, int> mp;
    while (N--) {
        int A;
        cin >> A;

        if (mp[A]) mp[A]--;
        else mp[A]++;
    }

    int ans = 0;
    for (auto [num, cnt]: mp) {
        if (cnt > 0) ans++;
    }
    cout << ans << endl;

    return 0;
}