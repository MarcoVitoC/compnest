#include <bits/stdc++.h>
using namespace std;

int main() {
   while (1) {
      int N;
      cin >> N;

      if (N == 0) break;

      priority_queue<int, vector<int>, greater<int>> minHeap;
      int num;
      for (int i=0; i<N; i++) {
         cin >> num;
         minHeap.push(num);
      }

      int minCost = 0;
      while (minHeap.size() > 1) {
         int firstNum = minHeap.top();
         minHeap.pop();
         int secondNum = minHeap.top();
         minHeap.pop();

         int sum = firstNum + secondNum;
         minCost += (sum);
         minHeap.push(sum);
      }

      cout << minCost << endl;
   }

   return 0;
}