#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

bool isBingo(int x, int y, int z) {
    return x == -1 && y == -1 && z == -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<vector<int>> A(3, vector<int>(3));
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> A[i][j];
        }
    }

    int N, b;
    cin >> N;

    while (N--) {
        cin >> b;

        bool ok = false;
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (A[i][j] != b) continue;

                A[i][j] = -1;
                ok = true;
                break;
            }

            if (ok) break;
        }
    }

    if (isBingo(A[0][0], A[1][1], A[2][2]) || isBingo(A[0][2], A[1][1], A[2][0])) {
        cout << "Yes" << endl;
        return 0;
    }

    for (int i=0; i<3; i++) {
        if (isBingo(A[i][0], A[i][1], A[i][2]) || isBingo(A[0][i], A[1][i], A[2][i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}