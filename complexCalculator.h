
#ifndef COMPLEXCALCULATOR_CLASS
#define COMPLEXCALCULATOR_CLASS

//This will allow for us to return the real and imaginary parts from a function
struct complexNumber{
    float re = 0; //real part of complex number
    float im = 0; //imaginary part of complex number
};


class complexCalculator{
    private:

    public:
        complexNumber add(complexNumber first, complexNumber second); //Add first to second
        complexNumber subtract(complexNumber first, complexNumber second); //Subtract second from first
        complexNumber multiply(complexNumber first, complexNumber second); //Multiply first by second
        complexNumber divide(complexNumber first, complexNumber second); //Divide first by second
        float mag(complexNumber x); //Determine the magnitude of x
        float phase(complexNumber x); //Determine the phase of x
        void printComplexNumber(complexNumber x); //Print complex number in the format "<real number>+(<complex number>)i"
};


#endif


