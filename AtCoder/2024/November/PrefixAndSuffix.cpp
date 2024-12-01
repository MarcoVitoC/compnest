#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    string s, t;
    cin >> s >> t;

    int i = 0, len = 0;
    while (i < N) {
        string S = s.substr(i); // suffix of s
        string T = t.substr(0, N - i); // prefix of t

        if (S == T) {
            len = S.length();
            break;
        }

        i++;
    }
    cout << i * 2 + len << endl;

    return 0;
}