//
//  EquationCalculator.cpp
//  Fun Calculator
//
//  Created by Alex Lai & Steven Chau on 12/18/20.
//

#include "EquationCalculator.h"
using namespace std;

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
    history.push_back("Catalan " + to_string(n));
	return return_value;
}

//Solve for hypotenuse c = sqrt(a^2 + b^2)
double EquationCalculator::PythagoreanTheoremHypotenuse(double a, double b){
    history.push_back("c = sqrt(" + to_string(a) + "^2 +" + to_string(b) + "^2");
    return sqrt((a * a) + (b * b));
}

//Solve for leg (b = sqrt(c^2 - a^2)
double EquationCalculator::PythagoreanTheoremLeg(double c, double a){
    history.push_back("b = sqrt(" + to_string(c) + "^2 -" + to_string(a) + "^2");
    return sqrt((c * c) - (a * a));
}

//Code is from https://www.programiz.com/cpp-programming/examples/quadratic-roots
void EquationCalculator::QuadraticFormula(double a, double b, double c){
    double x1, x2, discriminant, real, imaginary;
    discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0) {
            x1 = (-b + sqrt(discriminant)) / (2*a);
            x2 = (-b - sqrt(discriminant)) / (2*a);
            cout << "Roots are real and different." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        
        else if (discriminant == 0) {
            cout << "Roots are real and same." << endl;
            x1 = -b/(2*a);
            cout << "x1 = x2 =" << x1 << endl;
        }

        else {
            real = -b/(2*a);
            imaginary = sqrt(-discriminant)/(2*a);
            cout << "Roots are complex and different."  << endl;
            cout << "x1 = " << real << "+" << imaginary << "i" << endl;
            cout << "x2 = " << real << "-" << imaginary << "i" << endl;
        }
    history.push_back("Quadratic formula: (-b±√(b^2-4ac))/2a, a: " + to_string(a) + ", b: " + to_string(b) + ", c: " + to_string(c));
}

double EquationCalculator::Slope(double x1, double y1, double x2, double y2){
    history.push_back("Slope of (" + to_string(x1) + ", " + to_string(y1) + "), (" + to_string(x2) + ", " + to_string(y2) + ")");
    return (y2 - y1)/(x2 - x1);
}
