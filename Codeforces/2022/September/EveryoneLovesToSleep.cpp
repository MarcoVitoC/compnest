#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int n, H, M;
		cin >> n >> H >> M;
		
		int sleepInMinute = 60 * H + M; // count the time he went to bed in minute
		int res = 24 * 60; // initialize the answer to 1 day in minute
		int h, m;
		for (int i=0; i<n; i++){
			cin >> h >> m;
			
			int sleepTime = 60 * h + m - sleepInMinute; // subtract the alarm time in minute with sleepInMinute
			if (sleepTime < 0){ // the sleepTime will be negative if the alarm time is sooner than than the time he slept, then
				sleepTime += 24 * 60; // plus it with a total minute in 1 day because it must pass full day.
			}
			res = min(res, sleepTime); // the first alarm that rang first will be the minimum sleepTime (answer)
		}
		cout << res / 60 << " " << res % 60 << endl;
	}
	return 0;
}
