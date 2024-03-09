#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int N, T;
   cin >> N >> T;

   vector<ll> c(N+5);
   map<ll, int> mp;
   mp[0] = N;
   while (T--) {
      int A, B;
      cin >> A >> B;

      if (--mp[c[A]] == 0) mp.erase(c[A]);

      c[A] += B;
      mp[c[A]]++;

      cout << mp.size() << endl;
   }

   return 0;
}