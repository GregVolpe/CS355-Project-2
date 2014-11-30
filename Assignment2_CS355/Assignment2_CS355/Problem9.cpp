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
		<< "Ten: " << TEN << endl << endl;
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
		<< "Ten Squared: " << TEN*TEN << endl << endl;
}
void Problem9::addEnum(){
	cout << "Let's add each of the enums!" << endl;
	cout << "One plus one: " << ONE + ONE << endl
		<< "Two plus two: " << TWO + TWO << endl
		<< "Three plus three: " << THREE + THREE << endl
		<< "Four plus four: " << FOUR + FOUR << endl
		<< "Five plus five: " << FIVE + FIVE << endl
		<< "Six plus six: " << SIX + SIX << endl
		<< "Seven plus seven: " << SEVEN + SEVEN << endl
		<< "Eight plus eight: " << EIGHT + EIGHT << endl
		<< "Nine plus nine: " << NINE + NINE << endl
		<< "Ten plus ten: " << TEN + TEN << endl << endl;
}