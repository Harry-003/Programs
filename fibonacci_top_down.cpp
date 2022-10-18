#include <iostream>
#include <vector>
using namespace std;
#define NIL -1

vector<long long int> fibonacci_series(INT16_MAX, NIL);

long long int fibonacci(int num)
{

    if (fibonacci_series[num] != NIL)
        return fibonacci_series[num];

    if (num <= 1)
        return (fibonacci_series[num] = num);

    return (fibonacci_series[num] = fibonacci(num - 1) + fibonacci(num - 2));
}

int main()
{
    int num;
    cin >> num;

    cout << fibonacci(num) << endl;
    cin >> num;
    cout << fibonacci(num);
    return 0;
}
