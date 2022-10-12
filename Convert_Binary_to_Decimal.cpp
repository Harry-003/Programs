#include<bits/stdc++.h>
using namespace std;
int main() {
	string s = "1011";
	int n = s.length();
	int base = 1;
	int ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '1') {
			ans += base;
		}
		base *= 2;
	}
	cout << ans;
}