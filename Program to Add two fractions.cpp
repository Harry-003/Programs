#include<bits/stdc++.h>
using namespace std;
int _gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return _gcd(b, a % b);
}
void simple(int &num3, int &den3) {
	int gcd = _gcd(num3, den3);
	//dividing num and den by gcd to get the fraction
	//in the simplest form.
	num3 /= gcd;
	den3 /= gcd;
}
int main()
{
	//num3 and den3 stores the numerator and denominator of the final answer
	int num1 = 3, den1 = 4, num2 = 1, den2 = 7, num3, den3;
	int lcm = (den1 * den2) / _gcd(den1, den2);
	//answer's denominator will be lcm of den1 and den2
	den3 = lcm;
	//changing numerators to have same denominator and then adding
	num3 = num1 * (den3 / den1) + num2 * (den3 / den2);
	simple(num3, den3);
	cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " << num3 << "/" 
        << den3;

}