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
	int n;
	cout << "Enter the size of the Array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the Array: ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	insertionSort(arr, n);
	cout<<"\nSorted Array : \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
