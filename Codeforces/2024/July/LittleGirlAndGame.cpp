#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    map<char, int> mp;
    for (char c: s) mp[c]++;

    int odd = 0;
    for (auto [c, cnt]: mp) {
        if (cnt % 2 != 0) odd++;
    }
    cout << ((odd <= 1 || odd % 2 != 0) ? "First" : "Second") << endl;

    return 0;
}