#include<bits/stdc++.h>
using namespace std;

void MissingNumber(int arr[],int n)
{
    bool check[n];
    for(int i=0;i<n;i++)
        check[i] = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            check[arr[i]] = 1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(check[i]==0)
        {
            cout<<i;
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    MissingNumber(arr,n);
}