#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, a;
    cin >> N;

    map<int, int> mp;
    while (N--) {
        cin >> a;
        mp[a]++;
    }

    int ans = 1;
    for (auto [num, cnt]: mp) {
        int prev = (mp.count(num - 1)) ? mp[num - 1] : 0;
        int next = (mp.count(num + 1)) ? mp[num + 1] : 0;
        
        ans = max(ans, prev + cnt + next);
    }
    cout << ans << endl;

    return 0;
}