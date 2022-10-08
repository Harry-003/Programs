#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
	int key;
	for(int i=1; i<n;i++){
		key = arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

int main(){
	int n=7;
	int arr[n]={6, 8, 12, 14, 18, 20, 10};
	insertionSort(arr, n);
	cout<<"Sorted Array : \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
