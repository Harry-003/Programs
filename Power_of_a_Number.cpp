#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 5, k = 3;
	int ans = 1;
	for (int i = 0; i < k; i++) {
		ans = ans * n;
	}
	cout <<n<<" raised to the power "<<k<<" is "<< ans;
}