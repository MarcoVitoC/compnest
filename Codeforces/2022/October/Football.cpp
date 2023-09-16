#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	string firstTeam = "", secondTeam = "";
	int first = 0, second = 0;
	for (int i=0; i<n; i++){
		string s;
		cin >> s;
		
		if (i == 0){
			firstTeam = s;
		}
		
		if (s == firstTeam){
			first++;
		}else if (s == secondTeam){
			second++;
		}else {
			secondTeam = s;
			second++;
		}
	}
	
	string winner = (first > second) ? firstTeam : secondTeam;
	cout << winner << endl;
	return 0;
}
