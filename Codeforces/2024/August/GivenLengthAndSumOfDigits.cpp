#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

bool isPossible(int m, int s) {
    return s >= 0 && 9 * m >= s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int m, s;
    cin >> m >> s;

    int mnSum = s, mxSum = s;
    string mn = "", mx = "";
    for (int i=0; i<m; i++) {
        for (int k=0; k<10; k++) {
            if ((i > 0 || k > 0 || (m == 1 && k == 0)) && isPossible(m - i - 1, mnSum - k)) {
                mn += (k + '0');
                mnSum -= k;
                break;
            }
        }
        for (int k=9; k>=0; k--) {
            if ((i > 0 || k > 0 || (m == 1 && k == 0)) && isPossible(m - i - 1, mxSum - k)) {
                mx += (k + '0');
                mxSum -= k;
                break;
            }
        }
    }
    
    if (mn.empty() || (m > 1 && mn[0] == '0')) {
        cout << -1 << " " << -1 << endl;
    } else {
        cout << mn << " " << mx << endl;
    }

    return 0;
}