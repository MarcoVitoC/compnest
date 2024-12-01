#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int c[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> c[i][j];
        }
    }

    for (int i=0; i<3; i++) {
        int diff = abs(c[i][0] - c[(i + 1) % 3][0]);
        for (int j=1; j<3; j++) {
            if (abs(c[i][j] - c[(i + 1) % 3][j]) != diff) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}