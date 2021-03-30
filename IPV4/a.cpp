//----------------------------------------------------
//              CS 215 - Lab Exam 1 - Version C
//                  Timothy Clapper
//-----------------------------------------------------
#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;

int main() {

	char fruit;
	double price;
	int fruit_count;

	fruit_count = 0;
	price = 0.00;
	
	cout << "\nQuestion 1:\n";
	cout << "Enter fruit (O,A,P,B) or X: ";
	cin >> fruit;

	while (fruit != 'O' && fruit != 'A' && fruit != 'P' && fruit != 'B' && fruit != 'X') {
		cout << "Invaldi fruit!\n";
		cout << fixed << setprecision(2) << "Current price=" << price << " of " << fruit_count << " fruits selected.\n";
		cout << "Enter fruit (O,A,P,B) or X: ";
		cin >> fruit;
	}

	while (fruit != 'X') {
		if (fruit == 'O') {
			price += 0.50;
		}
		else if (fruit == 'A'){
			price += 0.75;
		}
		else if (fruit == 'P') {
			price += 1.00;
		}
		else {
			price += 0.10;
		}
		++fruit_count;

		cout << fixed << setprecision(2) << "Current price=" << price << " of " << fruit_count << " fruits selected.\n";

		cout << "Enter fruit (O,A,P,B) or X: ";
		cin >> fruit;

		while (fruit != 'O' && fruit != 'A' && fruit != 'P' && fruit != 'B' && fruit != 'X') {
			cout << "Invaldi fruit!\n";
			cout << fixed << setprecision(2) << "Current price=" << price << " of " << fruit_count << " fruits selected.\n";
			cout << "Enter fruit (O,A,P,B) or X: ";

			cin >> fruit;

		}


	}
	cout << "Total price=" << price << " of " << fruit_count << " fruits selected.\n";

	
	
	cout << "\nQuestion 2:\n";

	string team1, team2;
	int points, score,team1_score, team2_score;

	cout << "Enter team name 1: ";
	cin >> team1;

	cout << "Enter team name 2: ";
	cin >> team2;


	cout << "1. " << team1 << endl;
	cout << "2. " << team2 << endl;
	cout << "3. End Game\n";

	cout << "Who scored? (1/2/3): ";
	cin >> score;

	while (score < 1 || score > 3) {
		cout << "Invalid input...enter 1/2/3\n";
		cout << "1. " << team1 << endl;
		cout << "2. " << team2 << endl;
		cout << "3. End Game\n";

		cout << "Who scored? (1/2/3): ";
		cin >> score;
	}
	cout << "Enter points:        ";
	cin >> points;
	team1_score = 0;
		team2_score = 0;
	while (score != 3) {
	
		
		if (score == 1) {
			team1_score += points;

		}
		if (score == 2) {
			team2_score += points;
		}
		cout << "Current scores: " << team1 << "=" << team1_score << " " << team2 << "=" << team2_score << endl;
		
		cout << "1. " << team1 << endl;
		cout << "2. " << team2 << endl;
		cout << "3. End Game\n";

		cout << "Who scored? (1/2/3): ";
		cin >> score;
		while (score < 1 && score > 3) {
			cout << "Invalid input...enter 1/2/3\n";
			cout << "1. " << team1 << endl;
			cout << "2. " << team2 << endl;
			cout << "3. End Game\n";

			cout << "Who scored? (1/2/3): ";
			cin >> score;
			cout << "Enter points:        ";
			cin >> points;
		}
	}

	if (team1_score > team2_score) {
		cout << team1 << " won the game!";
	}
	else {
		cout << team2 << " won the game!";
	}
	
	
	cout << "\nQuestion 4:\n";
	int start_num,stop_num;
	
	cout << "Enter start number: ";
	cin >> start_num;
	cout << "Enter stop number:  ";
	cin >> stop_num;
	while (stop_num < start_num) {
		cout << "Stop must be greater thant start!\n";
		cout << "Enter stop number:  ";
		cin >> stop_num;

	}
	for (int i = start_num; i <= stop_num; i++) {
		start_num += i;
	}
	cout << start_num;
}