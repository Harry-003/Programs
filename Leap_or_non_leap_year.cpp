#include<bits/stdc++.h>
using namespace std;
bool yyear(int year)
{
    if(year % 400 == 0)
    return true;
    if(year % 100 == 0)
    return false;
    if(year % 4 == 0)
    return true;
    return false;
}
int main()
{
    int year=1996;
    if(yyear(year))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}