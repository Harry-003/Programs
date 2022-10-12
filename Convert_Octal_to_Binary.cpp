#include <iostream>
#include <math.h>
using namespace std;
int OctaltoDecimal(int Octal)
{
    int Decimal = 0;
    int i = 0;
    while (Octal != 0)
    {
        int rem = Octal % 10;
        Decimal += rem * pow(8, i);
        i++;
        Octal /= 10;
    }
    return Decimal;
}
int DecimaltoBinary(int decimal)
{
    int Binary = 0;
    int i = 0;
    while (decimal != 0)
    {
        int rem = decimal % 2;
        Binary += (rem * pow(10, i));
        i++;
        decimal = decimal / 2;
    }
    return Binary;
}
int main()
{
    int Octal = 345;
    int Decimal = OctaltoDecimal(Octal);
    cout << "The binary conversion of the given octal number is "<<DecimaltoBinary(Decimal) << endl;
    return 0;
}