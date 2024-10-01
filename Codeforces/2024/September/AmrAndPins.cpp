#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

bool isPerfectSquareNumber(double x) {
    return x - (int)x == 0;
}

int ceil(int a, int b) {
    return (a + b - 1) / b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll r, x, y, nx, ny;
    cin >> r >> x >> y >> nx >> ny;

    double d = sqrt((nx - x) * (nx - x) + (ny - y) * (ny - y));
    d += !isPerfectSquareNumber(d);

    cout << ceil(d, 2 * r) << endl;

    return 0;
}