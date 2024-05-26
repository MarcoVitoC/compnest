#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int N, M;
   cin >> N >> M;

   vector<int> A(N), B(M);
   priority_queue<int, vector<int>, greater<int>> minHeap;
   for (int &Ai: A) {
      cin >> Ai;
      minHeap.push(Ai);
   }
   sort(A.begin(), A.end());

   for (int &Bi: B) {
      cin >> Bi;
      minHeap.push(Bi);
   }

   int cnt = 0;
   while (!minHeap.empty()) {
      cnt = (binary_search(A.begin(), A.end(), minHeap.top())) ? cnt + 1 : 0;
      if (cnt == 2) {
         cout << "Yes" << endl;
         return;
      }
      minHeap.pop();
   }
   cout << "No" << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}