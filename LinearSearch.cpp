#include <iostream>
using namespace std;
int main(){
    int n,search,flag=0;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements in an array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the element to be searched :";
    cin>>search;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            flag++;
            break;
        }
    }
    if(flag==1) cout<<"\nElement is found in an array";
    else cout<<"Element is not found in an array";
    return 0;
}
