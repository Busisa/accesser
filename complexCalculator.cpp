#include "complexCalculator.h"
#include <cmath>
#include<iostream>

using namespace std;


complexNumber complexCalculator::add(complexNumber first, complexNumber second) //Add first to second
{
 first.re+second.re;
 first.im+second.im;
}

complexNumber complexCalculator::subtract(complexNumber first, complexNumber second) //Subtract second from first
{
first.re-second.re;
first.im-second.im;
}

complexNumber complexCalculator::multiply(complexNumber first, complexNumber second) //Multiply first by second
{
first.re*second.re;
first.im*second.im;
}

complexNumber complexCalculator::divide(complexNumber first, complexNumber second) //Divide first by second
{
first.re/second.re;
first.im/second.im;
}

float complexCalculator::mag(complexNumber x) //Determine the magnitude of x
{
return sqrt((x.re*x.re)+(x.im*x.im));
}

float complexCalculator::phase(complexNumber x) //Determine the phase of x
{
return atan(x.im/x.re);
}

void complexCalculator::printComplexNumber(complexNumber x) //Print complex number x
{
 cout<< x.re<<" "<<x.im<<"i"<<endl;
}
