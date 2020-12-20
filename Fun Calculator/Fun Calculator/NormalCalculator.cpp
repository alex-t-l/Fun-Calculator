//
//  NormalCalculator.cpp
//  Fun Calculator
//
//  Created by Alex Lai & Steven Chau on 12/18/20.
//

#include "NormalCalculator.h"

double NormalCalculator::Add(double rhs, double lhs)
{
	string record = to_string(rhs) + " + " + to_string(lhs);
	history.push_back(record);
	return rhs+lhs;
}

double NormalCalculator::Subtract(double rhs, double lhs)
{
	string record = to_string(rhs) + " - " + to_string(lhs);
	history.push_back(record);
	return rhs-lhs;
}

double NormalCalculator::Divide(double rhs, double lhs)
{
	string record = to_string(rhs) + " / " + to_string(lhs);
	history.push_back(record);
	return rhs/lhs;
}

double NormalCalculator::Multiply(double rhs, double lhs)
{
	string record = to_string(rhs) + " x " + to_string(lhs);
	history.push_back(record);
	return rhs*lhs;
}

double NormalCalculator::Power(double base, double exponent)
{
	string record = to_string(base) + " ^ " + to_string(exponent);
	history.push_back(record);
    return pow(base, exponent);
}

double NormalCalculator::Log(double num)
{
	string record = "log(" + to_string(num) + ")";
	history.push_back(record);
	return log(num);
}

double NormalCalculator::Factorial(double num)
{
	string record = to_string(num) + "!";
	history.push_back(record);
	return FactorialHelper(num);
}

vector<string> NormalCalculator::PrintHistory() const
{
	return history;
}



NormalCalculator::NormalCalculator()
{
}

NormalCalculator::~NormalCalculator()
{
}

//Private

double NormalCalculator::FactorialHelper(double x)
{
	if (x == 1 || x == 0)
	{
		return 1;
	}
	else
	{
		return x * FactorialHelper(x-1);
	}
}
