#include <iostream>
using namespace std;
void BS(int arr[],int search,int start,int end){
    if(start>end){
        cout<<"Element is not found in an array";
        return;
    }
    int mid=(start+end)/2;
    if(arr[mid]==search){
        cout<<"Element is found in an array";
        return;
    }
    if(arr[mid]<search) BS(arr,search,mid+1,end);
    if(arr[mid]>search) BS(arr,search,start,mid-1);
}
int main(){
    int n,start=0,end,mid,search;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    end=n-1;
    cout<<"\nEnter the elements into an array:";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter the element that need to be searched:";
    cin>>search;
    BS(arr,search,start,end);
    return 0;
}
