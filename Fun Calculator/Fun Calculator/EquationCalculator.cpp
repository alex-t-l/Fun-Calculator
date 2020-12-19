//
//  EquationCalculator.cpp
//  Fun Calculator
//
//  Created by Alex Lai & Steven Chau on 12/18/20.
//

#include "NormalCalculator.h"

double EquationCalculator::Catalan(double n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	int return_value = 0;
	for (int i = 0; i < n; i++) {
		return_value += Catalan(i) * Catalan(n - i - 1);
	}
	return return_value;
}