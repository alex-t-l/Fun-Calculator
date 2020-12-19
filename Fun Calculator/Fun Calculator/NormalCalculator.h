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

	double Add(double a, double b);

	double Subtract(double a, double b);

	double Divide(double a, double b);

	double Multiply(double a, double b);

	double Power(double a, double b);

	double Log(double a, double b);

	double Factorial(double a, double b);

	double PrintHistory(double a, double b);
private:
	vector<string> history_;
};
#endif /* NormalCalculator_h */

