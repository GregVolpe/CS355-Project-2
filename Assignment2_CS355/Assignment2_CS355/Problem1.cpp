#include "Problem1.h"
#include <iostream>

using namespace std;

Problem1::Problem1()
{
	num = 10;
}


Problem1::~Problem1()
{
}

void Problem1::runProblem1(){
	int a = 10; a = a + fun(a);
	cout << "int a = 10; a = a + fun(a);" << endl;
	cout << a << endl;
	int b = 10; b = b + funReference(b);
	cout << "int b = 10; b = b + funReference(b);" << endl;
	cout << b << endl << endl;
	cout << "addNumebers(++num, num++);" << endl;
	cout << "num initial value: " << num << endl;
	this->addNumbers(++num, num++);
	this->resetNum();
	cout << "addNumbersReference(++num, ++num);" << endl;
	cout << "num initial value: " << num << endl;
	this->addNumbersReference(++num, ++num);
	this->resetNum();

	
}
void Problem1::addNumbers(int a, int b){
	cout << "adding " << a << " to " << b << ": " << a + b << endl;
}
void Problem1::addNumbersReference(int &a, int &b){
	cout << "adding " << a << " to " << b << ": " << a + b << endl;
}
void Problem1::resetNum(){
	cout << "Resetting num to 10" << endl;
	num = 10;
}
int Problem1::fun(int a){
	a = 17;
	return 3;
}
int Problem1::funReference(int &a){
	a = 17;
	return 3;
}
void Problem1::basicPrecedence(){
	cout << "num: " << num << endl;
	num = num++ + ++num;
	cout << "num = num++ + ++num: " << num << endl;
	this->resetNum();
	num = ++num * num++;
	cout << "num = ++num * num++: " << num << endl;
	this->resetNum();
	cout << "addNumebers(++num, num++);" << endl;
	this->addNumbers(++num, num++);
	this->resetNum();
	cout << "addNumbers(num = 11, num = 14);" << endl;
	this->addNumbers(num = 11, num = 14);
	this->resetNum();
	cout << "cout << num << num++ << endl;" << endl;
	cout << num << " " << num++ << endl;
	this->resetNum();
	cout << "cout << ++ ++num: " << ++ ++num << endl;
}