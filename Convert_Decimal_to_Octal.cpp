#include <iostream>
#include <math.h>
using namespace std;
int DecimaltoOctal(int decimal)
{
    int Octal = 0;
    int i = 0;
    while (decimal != 0)
    {
        int rem = decimal % 8;
        Octal += rem * pow(10, i);
        i++;
        decimal = decimal / 8;
    }
    return Octal;
}
int main()
{
    int decimal = 136;
    cout <<"The Octal conversion of the given decimal number is "<<DecimaltoOctal(decimal) << endl;
    return 0;
}