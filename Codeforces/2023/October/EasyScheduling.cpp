#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll h, p;
   cin >> h >> p;

   ll tasks = pow(2, h) - 1, readyTask = 1, ans = 0;
   while (tasks > 0 && readyTask <= p) { // process all nodes on each tree level until readyTask > p
      ans++;
      tasks -= readyTask;
      readyTask *= 2;
   }

   if (tasks > 0) {
      ans += (tasks / p);
      if (tasks % p != 0) ans++; // add answer by 1 if the remaining tasks can't be processed for at most p process
   }

   cout << ans << endl;
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