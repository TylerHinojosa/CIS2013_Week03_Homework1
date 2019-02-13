#include <iostream>
using namespace std;
int main(){

	char firstPlayer, secondPlayer, tempChar;
	
	bool check = true;
	
	do{
	
	
		cout << "Enter player one's choice: ";
		cin >> tempChar;
		if (tempChar == 'R') tempChar = 'r';
		if (tempChar == 'S') tempChar = 's';
		if (tempChar == 'P') tempChar = 'p';
		firstPlayer = tempChar;
		
		cout << "Enter the second player's choice: ";
		cin >> tempChar;
		
		if (tempChar = 'R') tempChar = 'r';
		if (tempChar = 'S') tempChar = 's';
		if (tempChar = 'P') tempChar = 'p';
		secondPlayer = tempChar;
		
		
		//Displaying the winner
		if (firstPlayer == secondPlayer) cout << "\n Nobody wins!";
		else if (firstPlayer == 'r' && secondPlayer == 's' \
		|| firstPlayer == 's' && secondPlayer == 'p')
		cout << "\n The first player wins!";
		
		else cout <<"\n The second player wins!";
		
		cout << "\n\n Want to play again? enter Y otherwise enter "
		"0: ";
		cin >> check;
		}
		while (check);
		
		
		
		return 0;}