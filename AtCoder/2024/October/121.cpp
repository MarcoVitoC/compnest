#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;

    int len = log10(b) + 1;
    a = a * pow(10, len) + b;

    double sq = sqrt(a);
    cout << ((sq - (int)sq == 0) ? "Yes" : "No") << endl;

    return 0;
}