#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string S;
    cin >> S;

    while (1) {
        S.pop_back();

        int N = S.length();
        string a = S.substr(0, N / 2);
        string b = S.substr(N / 2);
        if (a == b) {
            cout << N << endl;
            break;
        }
    }

    return 0;
}