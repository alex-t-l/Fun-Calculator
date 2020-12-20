//
//  NormalCalculator.cpp
//  Fun Calculator
//
//  Created by Alex Lai & Steven Chau on 12/18/20.
//

#ifndef NormalCalculator_h
#define NormalCalculator_h

#include <vector>
#include <string>
#include <stdio.h>
using namespace std;
//Normal Calculator Functions
class NormalCalculator
{
public:
	NormalCalculator();
	~NormalCalculator();

	double Add(double rhs, double lhs);

	double Subtract(double rhs, double lhs);

	double Divide(double rhs, double lhs);

	double Multiply(double rhs, double lhs);

	double Power(double base, double exponent);

	double Log(double num);

	double Factorial(double num);

	vector<string> PrintHistory() const;
private:
	vector <pair<string, string> history;
	double FactorialHelper(double x);
};
#endif /* NormalCalculator_h */

