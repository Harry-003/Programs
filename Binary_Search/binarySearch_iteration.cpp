#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,start=0,end,mid,flag=0;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements into an array :";
    for(int i=0;i<n;i++) cin>>arr[i];
    int search;
    cout<<"Enter the element that need to be searched :";
    cin>>search;
    end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==search){
            flag++;
            break;
        }
        if(arr[mid]<search) start=mid+1;
        else end=mid-1;
    }
    if(flag==1) cout<<"Element is found in an array";
    else cout<<"Element is not found in an array";

    return 0;
}
