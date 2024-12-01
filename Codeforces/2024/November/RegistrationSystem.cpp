#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    map<string, int> mp;
    while (n--) {
        string s;
        cin >> s;

        if (!mp[s]) {
            mp[s]++;
            cout << "OK" << endl;
            continue;
        }

        string cnt = to_string(mp[s]);
        string newName = s + cnt;
        cout << newName << endl;
        mp[newName]++;
        mp[s]++;
    }

    return 0;
}