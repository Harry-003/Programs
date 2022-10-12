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
	int n=10;
	int arr[n]={11,13,7,12,16,9,24,5,10,3};
	
	quickSort(arr, 0, n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
