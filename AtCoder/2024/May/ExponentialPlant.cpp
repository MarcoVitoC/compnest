#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int H;
   cin >> H;

   int i = 1;
   while ((1LL << i) - 1 <= H) i++;

   cout << i << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}