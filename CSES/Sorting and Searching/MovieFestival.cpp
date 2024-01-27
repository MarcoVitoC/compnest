#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   vector<pair<int, int>> movies;
   int a, b;
   for (int i=0; i<n; i++) {
      cin >> a >> b;
      movies.push_back({b, a});
   }
   sort(movies.begin(), movies.end());

   int ans = 1, lastEndingTime = movies[0].first;
   for (int i=1; i<movies.size(); i++) {
      if (movies[i].second < lastEndingTime) continue;

      lastEndingTime = movies[i].first;
      ans++;
   }
   cout << ans << endl;

   return 0;
}