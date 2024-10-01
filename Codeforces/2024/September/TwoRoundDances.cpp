#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    ll f = 1;
    for (int i=n-1; i>=1; i--) { // circular permutation formula -> (n - 1)!
        f *= i;
    }

    // divide by (n / 2) to prevent reflected/duplicate arrangements for each group, similar to (n - 1)! / 2
    cout << f / (n / 2) << endl;

    return 0;
}