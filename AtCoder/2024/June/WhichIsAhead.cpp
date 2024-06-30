#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N, P;
   cin >> N;

   map<int, int> q;
   for (int i=0; i<N; i++) {
      cin >> P;
      q[P] = i + 1;
   }

   int Q, A, B;
   cin >> Q;

   while (Q--) {
      cin >> A >> B;
      cout << ((q[A] < q[B]) ? A : B) << endl;
   }

   return 0;
}