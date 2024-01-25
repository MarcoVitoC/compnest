#include <bits/stdc++.h>
#define ll long long
using namespace std;

void generateAllPossibleSum(vector<ll> &p, set<ll> &s, ll idx, ll sum) {
   if (idx == p.size()) {
      s.insert(sum);
      return;
   }

   generateAllPossibleSum(p, s, idx + 1, sum + p[idx]);
   generateAllPossibleSum(p, s, idx + 1, sum);
}

int main() {
   int n;
   cin >> n;

   vector<ll> p(n);
   ll totalSum = 0;
   for (ll &pi: p) {
      cin >> pi;
      totalSum += pi;
   }

   set<ll> s;
   generateAllPossibleSum(p, s, 0, 0);

   ll minDiff = 1e9, group1 = 0, group2 = 0;
   for (ll sum: s) {
      group1 = totalSum - sum;
      group2 = totalSum - group1;

      minDiff = min(minDiff, abs(group1 - group2));
   }
   cout << minDiff << endl;

   return 0;
}