#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int N, A, B;
   cin >> N >> A >> B;

   vector<int> D(N);
   for (int &d: D) {
      cin >> d;
      d %= (A + B);
   }
   sort(D.begin(), D.end());
   D.erase(unique(D.begin(), D.end()), D.end());

   if (D.back() - D.front() < A) {
      cout << "Yes" << endl;
      return;
   }

   for (int i=1; i<D.size(); i++) {
      if (D[i] - D[i - 1] > B) {
         cout << "Yes" << endl;
         return;
      }
   }
   cout << "No" << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}