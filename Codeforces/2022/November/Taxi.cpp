#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int num;
	vector<int> s;
	for (int i=0; i<n; i++){
		cin >> num;
		s.push_back(num);
	}
	sort(s.begin(), s.end(), greater<int>());
	
	int ans = 0;
	for (int i=0; i<s.size(); i++){
		if (s[i] == 4){
			ans++;
		}else {
			while (s[i] + s[s.size()-1] <= 4){
				s[i] += s[s.size()-1];
				s.pop_back();
			}
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
