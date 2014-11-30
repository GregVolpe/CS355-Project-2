#include "Problem9.h"
#include <iostream>
using namespace std;

Problem9::Problem9(){
	//This is empty
}

void Problem9::printEnum(){
	cout << "We have an enumeration!  Here are the values" << endl << "One: " << ONE << endl
		<< "Two: " << TWO << endl
		<< "Three: " << THREE << endl
		<< "Four: " << FOUR << endl
		<< "Five: " << FIVE << endl
		<< "Six: " << SIX << endl
		<< "Seven: " << SEVEN << endl
		<< "Eight: " << EIGHT << endl
		<< "Nine: " << NINE << endl
		<< "Ten: " << TEN << endl;
}

void Problem9::multiplyEnum(){
	cout << "Let's square each of the enums!" << endl;
	cout << "One Squared: " << ONE*ONE << endl
		<< "Two Squared: " << TWO*TWO << endl
		<< "Three Squared: " << THREE*THREE << endl
		<< "Four Squared: " << FOUR*FOUR << endl
		<< "Five Squared: " << FIVE*FIVE << endl
		<< "Six Squared: " << SIX*SIX << endl
		<< "Seven Squared: " << SEVEN*SEVEN << endl
		<< "Eight Squared: " << EIGHT*EIGHT << endl
		<< "Nine Squared: " << NINE*NINE << endl
		<< "Ten Squared: " << TEN*TEN << endl;
}