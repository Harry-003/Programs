#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}

void selectionSort(int arr[], int n){
	int i,j,min_index;
	for(i=0;i<n-1;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_index])
			min_index=j;
			
			swap(arr[i], arr[min_index]);
		}
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
	selectionSort(arr, n);
	cout<<"\nSorted Array : \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

