#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, A, B;
    cin >> N >> A >> B;

    string S;
    cin >> S;

    int p = 0, rb = 1;
    for (char c: S) {
        if (c == 'c' || p >= A + B || (c == 'b' && rb > B)) {
            cout << "No" << endl;
            continue;
        }

        if (c == 'b') rb++;
        cout << "Yes" << endl;
        p++;
    }

    return 0;
}