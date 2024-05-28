#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<ll, ll> dp;

ll f(ll N) {
   if (N == 1) return 0;
   if (dp.count(N)) return dp[N];

   return dp[N] = N + f(N / 2) + f((N + 1) / 2);
}

int main() {
   ll N;
   cin >> N;

   cout << f(N) << endl;

   return 0;
}