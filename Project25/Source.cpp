#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	cout << "  == = Rock, Paper, Scissors == =  " << endl<<endl;
	cout << "  How many rounds?  " << endl;
	int r;
	cin >> r;
	int compScore = 0;
	int playerScore = 0;
	for (int i = 1; i <= r; i++) {
		cout << "Round" << i<<endl<<endl;
		cout << " Pleas Enter your choice(r / p / s) : "<<endl;
		char Choice;
		cin >> Choice;
		while (Choice != 'r' && Choice != 'p' && Choice != 's') {
			cout << " Pleace enter your choice again ?"<<endl;
			cin >> Choice;
		}
		int randomNum = rand() % 3;
		char compChoice;
		if (randomNum == 0) {
			compChoice = 'r';
		}
		else if (randomNum == 1) {
			compChoice = 'p';
		}
		else {
			compChoice = 's';
		}
		cout << " You chose " << Choice << " .  " << " Computer chose " << compChoice << " . "<<endl;
		if (Choice == compChoice) {
			cout << " It's a tie! "<<endl;
		}
		else if (Choice == 'r' && compChoice == 's') {
			cout << " You win this round! " << endl;
			++playerScore;
		}
		else if (Choice == 'p' && compChoice == 'r') {
			cout << " You win this round! " << endl;
			++playerScore;
		}
		else if (Choice == 's' && compChoice == 'p') {
			cout << " You win this round! " << endl;
			++playerScore;
		}
		else {
			cout << " Computer wins this round! " << endl;
			++compScore;
		}
		cout << " Score -> You: " << playerScore << " Computer: " << compScore << endl<<endl;
	}

	cout << " === Final Result === " << endl << endl;
	cout << " You: " << playerScore << " | Computer: " << compScore << endl<<endl;
	if (playerScore == compScore) {
		cout << " It's a tie overall! " << endl;
	}
	else if (playerScore > compScore) {
		cout << " You win this Game! " << endl;
	}
	else {
		cout << " Computer wins this Game! " << endl;
	}
}