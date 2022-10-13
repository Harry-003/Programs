#include<iostream>
using namespace std;

void merge(int A[],int l,int mid,int h)
{
	int i=l,j=mid+1,k=l;
	int B[100];
	
	while(i<=mid && j<=h)
	{
		if(A[i]<A[j])
		B[k++]=A[i++];
		else
		B[k++]=A[j++];
	}
	for(;i<=mid;i++)
	    B[k++]=A[i];
	for(;j<=h;j++)
	    B[k++]=A[j];
	for(i=l;i<=h;i++)
	    A[i]=B[i];
}

void mergeSort(int A[], int l, int h){
	int mid;
	if(l<h){
		mid=(l+h)/2;
		mergeSort(A, l, mid);
		mergeSort(A, mid+1, h);
		merge(A, l, mid, h);
	}
}

int main()
{
	int n;
	cout << "Enter the size of the Array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the Array: ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	mergeSort(arr, 0, n-1);
	cout<<"\nSorted Array : \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
 
    return 0;
}
