#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void dfs(string& s2, int i, int len, int desiredPos, int currPos, int& correctPos) {
    if (i == len) {
        if (currPos == desiredPos) correctPos++;
        return;
    }

    if (s2[i] == '?') {
        dfs(s2, i + 1, len, desiredPos, currPos + 1, correctPos);
        dfs(s2, i + 1, len, desiredPos, currPos - 1, correctPos);
    } else {
        dfs(s2, i + 1, len, desiredPos, currPos + (s2[i] == '+' ? 1 : -1), correctPos);
    }
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    int len = s1.length(), desiredPos = 0;
    for (int i=0; i<len; i++) {
        if (s1[i] == '+') desiredPos++;
        if (s1[i] == '-') desiredPos--;
    }

    int correctPos = 0;
    dfs(s2, 0, len, desiredPos, 0, correctPos);

    int q = count(all(s2), '?');
    double ans = correctPos * 1.0 / (1 << q); // divide correctPos with 2^q because every '?' has 2 possibilities
    printf("%.9f\n", ans);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}