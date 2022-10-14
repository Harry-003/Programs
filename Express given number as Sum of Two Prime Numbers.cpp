#include<bits/stdc++.h>
using namespace std;

class SumOf2Prime {

public:

    bool isPrime(int n) {

        if (n <= 1) {
            return 0 ;
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0 ) {
                return 0 ;
            }
        }

        return 1;
    }

    bool prime(int n) {

        if (isPrime(n) && isPrime(n - 2)) {
            return 1;
        }
        else {
            return 0 ;
        }
    }

} ;
int main() {

    int n = 19 ;
    SumOf2Prime s1 ;
    if (s1.prime(n)) {
        cout << "Yes\n"  ;
    }
    else {
        cout << "No\n" ;
    }
    return 0 ;
}