#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   queue<int> q;
   for (int x: a) {
      q.push(x);

      if (q.front() < q.size()) q.pop();
      cout << q.size() << " ";
   }
   cout << endl;
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