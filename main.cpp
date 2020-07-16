#include "complexCalculator.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    complexCalculator calc;
    complexNumber a, b, c, d;
    a.re = 10;
    a.im = -7;
    b.re = 3.2;
    b.im = 0.7;

    cout << "Add "<< endl;
    c = calc.add(a,b);
  calc.printComplexNumber(c);


    cout << endl << "Subtract "<< endl;
    c = calc.subtract(a,b);
    calc.printComplexNumber(c);

    cout<< endl  << "Multiply "<< endl;
    c = calc.multiply(a,b);
    calc.printComplexNumber(c);

    cout<< endl  << "Divide "<< endl;
    c = calc.divide(a,b);
    calc.printComplexNumber(c);

    cout << endl << "Mag "<< endl;
    cout << calc.mag(a) << endl;

    cout << endl << "Phase "<< endl;
    cout << calc.phase(a) << endl;

    return 0;
}
