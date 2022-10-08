#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}

int partition(int arr[], int low, int high){
	int pivot = arr[low];
	int i=low, j=high;
	
	do{
		do{i++;}
		while(arr[i]<=pivot);
		do{j--;}
		while(arr[j]>pivot);
		
		if(i<j)
		swap(&arr[i],&arr[j]);
				
	}while(i<j);
	
	swap(&arr[low], &arr[j]);
	return j;
	}

void quickSort(int arr[],int low,int high){
	
    if(low<high){
    	int j = partition(arr,low,high);
    	
    	quickSort(arr,low,j);
    	quickSort(arr,j+1,high);
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
	quickSort(arr, 0, n);
	cout<<"\nSorted Array : \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
