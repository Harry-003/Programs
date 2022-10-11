#include<iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {2,4,6,3,2,3,6};
    int profit = 0;
    for(int i = 1 ; i<n ; i++)
//We will find local minima and local maxima.
/*To find difference between local minima and local
maxima , we will add ( arr[i] - arr[i-1] ) in profit.*/
    {
        if(arr[i]>arr[i-1])
        profit += arr[i]-arr[i-1];
    }
    cout<<profit;
}
