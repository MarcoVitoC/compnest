#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   priority_queue<double> maxHeap;
   priority_queue<double, vector<double>, greater<double>> minHeap;
   double a;
   while (n--) {
      cin >> a;
      
      maxHeap.push(a);
      if (!maxHeap.empty() && !minHeap.empty() && maxHeap.top() > minHeap.top()) {
         minHeap.push(maxHeap.top());
         maxHeap.pop();
      }

      int diff = maxHeap.size() - minHeap.size();
      if (abs(diff) > 1) {
         if (maxHeap.size() >= minHeap.size()) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
         } else {
            maxHeap.push(minHeap.top());
            minHeap.pop();
         }
      }

      if (maxHeap.size() == minHeap.size()) {
         printf ("%.1lf\n", (maxHeap.top() + minHeap.top()) / 2);
      } else if (maxHeap.size() > minHeap.size()) {
         printf ("%.1lf\n", maxHeap.top());
      } else {
         printf ("%.1lf\n", minHeap.top());
      }
   }

   return 0;
}