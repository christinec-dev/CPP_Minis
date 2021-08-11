#include <iostream>
using namespace std;

/*Fraction calculations based on values m and n entered*/
long GCD(long m, long n)
{
    if (m % n == 0)
        return n;
    if (n % m == 0)
        return m;
    if (m > n)
        return GCD(m % n, n);
    else
        return GCD(m, n % m);
}


/*Reduce Function that will return 1 for success and 0 for failure and reduces the function*/
int reduce(long & num, long & denom)
{
    /*Will return 0 for failure if less than or equal to 0*/
    long GCDFraction;
    if (num <= 0 || denom <= 0)
        return 0;
    /*Will return 1 for success if positive value greater than 0*/
    else
    {
        int common = GCD(num, denom);
        num /= common;
        denom /= common;
        return 1;
    }
}

/*Main function that will perform reduced fractions based on entered values*/
int main()
{
    /*Enter your numerator and denominator and save the value*/
    long num, denom;
    cout << "Enter your numerator: ";
    cin >> num;
    cout << "Enter your denominator: ";
    cin >> denom;
    /*Reduced Function Calculation and output if values are > 0*/
    if (reduce(num, denom))
    {
        cout << "The reduced fraction is " << num << "/" << denom;
    }
    /*Reduced Function Calculation and output if values are <= 0*/
    else
    {
        cout << "The fraction " << num << "/" << denom << " cannot be reduced. Please enter a value above 0 and try again.";
    }
}