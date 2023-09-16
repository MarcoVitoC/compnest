#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	
	int playerCards = n / k; // the total cards that each player takes
	if (playerCards >= m){ // if playerCards is greater than total joker cards, then the first player can take all the joker cards to obtain maximum points
		cout << m << endl;
	}else {
		int x = playerCards; // the number of jokers card that the winner has
		int remainingJoker = m - x; // the remaining jokers card after the first player took it
		int y = remainingJoker / (k - 1) + (remainingJoker % (k - 1) != 0); // the maximum number of jokers among all other players
		// the remaining joker cards are divided by the numbers of other players
		/* if the remaining jokers card can't be divided by the numbers of other players, 
		   then add it by 1 so that we can get the max number of jokers from all other players */
		cout << x - y << endl; // the total points the winner gets
	}
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
