#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	int temp;
	
    for(int i=0; i<n-1;i++){
    	for(int j=0; j<n-1-i; j++){
    		if(arr[j]>arr[j+1]){
    			temp = arr[j];
    			arr[j] = arr[j+1];
    			arr[j+1] = temp;		
			}
		}
	}
}

int main(){
	int n=7;
	int arr[n]={64, 34, 25, 12, 22, 11, 90};
	bubbleSort(arr, n);
	cout<<"Sorted Array : \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
