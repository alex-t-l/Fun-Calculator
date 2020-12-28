//
//  EquationCalculator.h
//  Fun Calculator
//
//  Created by Alex Lai & Steven Chau on 12/18/20.
//

#ifndef EquationCalculator_h
#define EquationCalculator_h

#include <stdio.h>
#include <vector>
#include <iostream>
#include <tgmath.h> //For Sqrt

using namespace std;

class EquationCalculator{
    
public:
double Catalan(double n);
double CatalanHelper(double n);
//Can solve for root(c=a2+b2) which is hypotenuse or for leg root(b=c2﹣a2)
double PythagoreanTheoremHypotenuse(double a, double b);
double PythagoreanTheoremLeg(double c, double a);
//bool FundamentalTheoremOfCalculus(double x1, double x2); <- Leaving this for now
string Derivative(string& function);
string DerivativeHelper(string pTerm);
void QuadraticFormula(double a, double b, double c);
double Slope(double x1, double y1, double x2, double y2);


private:
    vector<pair<string, string>> history;
};

#endif /* EquationCalculator_h */
