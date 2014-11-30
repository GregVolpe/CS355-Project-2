/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1
Problem 3 Header
*/

#pragma once
class Problem9
{
public:
	Problem9();
	//Prints the enum to the command line
	void printEnum();
	//Adds the enum by itself
	void addEnum();
	//Multiplies the enum by itself
	void multiplyEnum();

private:
	enum enumBits{
		ONE = 1,
		TWO = 2,
		THREE = 3,
		FOUR = 4,
		FIVE = 5,
		SIX = 6,
		SEVEN=7,
		EIGHT = 8,
		NINE = 9,
		TEN = 10,
		ENUM_COUNT=TEN
	};

	enum randoms{
		BIG_COUNT = 20,
		INTCOUNT = 3
	};

};