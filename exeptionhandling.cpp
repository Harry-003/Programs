#include <iostream>
using namespace std;
int main()
{
    try
    {
        int var1;
        cout << "enter value of var1";
        cin >> var1;
        if (var1 == 1)
            throw var1;

        char var2;
        cout << "enter value of var2";
        cin >> var2;
        if (var2 == 'z')
            throw var2;
    }
    catch (int n)
    {
        cout << "\n n=" << n;
    }
    catch (char v)
    {
        cout << "\n v=" << v;
    }
    cout << "\nend of main";
    return 0;
}