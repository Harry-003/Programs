#include<iostream>
using namespace std;

int main()
{
    int n,space=0;
    cin>>n;

    space = n*2 - 2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int s=0;s<space;s++)
        {
            cout<<"  ";
        }
        space-= 2;
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    // For Inverted part
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        space+= 2;
        for(int s=0;s<space;s++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}