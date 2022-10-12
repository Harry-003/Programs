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
int main()
{
  int Octal = 345;
  cout <<"The decimal equivalent of the given octal number is "<<OctaltoDecimal(Octal) << endl;
  return 0;
}