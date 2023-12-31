#include <bits/stdc++.h>
using namespace std;

int bfs(string startWord, string endWord, vector<string>& dictionary) {
   queue<string> q;
   map<string, int> mp;

   q.push(startWord);
   mp[startWord] = 0;

   while (!q.empty()) {
      string possibleWord = q.front(); q.pop();

      for (string word: dictionary) {
         if (word.length() != possibleWord.length() || mp.count(word)) continue;

         int diff = 0;
         for (int i=0; i<word.length(); i++) {
            if (word[i] != possibleWord[i]) diff++;
         }

         if (diff == 1) {
            mp[word] = mp[possibleWord] + 1;
            if (word == endWord) return mp[endWord];
            q.push(word); 
         }
      }
   }

   return 0;
}

void solve() {
   vector<string> dictionary;
   string word, pairWords;

   while (cin >> word && word != "*") {
      dictionary.push_back(word);
   }
   cin.ignore();

   while (getline(cin, pairWords) && pairWords != "") {
      stringstream ss(pairWords);
      string startWord, endWord;
      ss >> startWord >> endWord;

      int steps = bfs(startWord, endWord, dictionary);
      cout << startWord << " " << endWord << " " << steps << endl;
   }
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N;
   cin >> N;

   while (N--) {
      solve();

      if (N) cout << '\n';
   }

   return 0;
}