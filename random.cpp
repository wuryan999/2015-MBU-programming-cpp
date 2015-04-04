#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	int guess = 0;
	// declare variable as counter for number of guesses
	int guesses = 0;

	
	for(;;)
	{
		// increment guess counter
		guesses = guesses + 1;
		// read input from user
		cin >> guess;
		
		// compare input from user to random number
		// print out winner, too high or too low message
		if (guess > random_number)
		{
			cout << "high" << endl;
		}
		else if (guess < random_number)
		{
			cout << "low" << endl;
		}
		else
		{
			cout << "winner" << endl;
			break;
		}
	}

	// print message with number of guesses
	cout << "number of guesses" << guesses <<endl;
	

	return 0;
}
