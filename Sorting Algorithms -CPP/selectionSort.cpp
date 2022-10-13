#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}

void selectionSort(int n, int arr[]){
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
	int n=5;
	int arr[n]={2,3,1,32,22};
	
	selectionSort(n, arr);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

