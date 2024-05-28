#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int N;
   cin >> N;

   vector<string> users(N);
   int C, scores = 0;
   for (string &S: users) {
      cin >> S >> C;
      scores += C;
   }
   sort(users.begin(), users.end());

   cout << users[scores % N] << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}