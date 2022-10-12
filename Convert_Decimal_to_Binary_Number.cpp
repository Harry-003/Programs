#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 28;
	int binary[32] = {0};
	int pow = 1;
	int i = 0;
	while (n) {
		binary[i] = n % 2;
		i++;
		n /= 2;
	}
	for (int ind = i - 1; ind >= 0; ind--) {
		cout << binary[ind];
	}
}
