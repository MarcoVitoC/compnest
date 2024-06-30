#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   k--;
   if (n % 2 == 0) {
      cout << (k % n) + 1 << endl;
      return;
   }

   int stepsToMeetA = n / 2;
   cout << ((k / stepsToMeetA) + k) % n + 1 << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}