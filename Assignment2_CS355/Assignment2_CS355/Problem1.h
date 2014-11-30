#pragma once
class Problem1
{
public:
	Problem1();
	~Problem1();

	void runProblem1();
	void addNumbers(int, int);
	int fun(int);
	int funReference(int&);
	void basicPrecedence();
	void addNumbersReference(int&, int&);

private:
	void resetNum();
	int num;
};

