#include<bits/stdc++.h>
using namespace std;

int findMax(int A[],int n)
{
	int max = INT_MIN;
	for(int i=0;i<n;i++)
	{
	if(A[i]>max)
	max=A[i];
	}
	return max;
}

void countSort(int A[], int n){
	int max = findMax(A, n);
	
//	Initialize an array of length max+1 with all elements 0
	int *c;
	c = new int [max+1];
	for(int i=0;i<max+1;i++){
		c[i]=0;
	}
	
//	Store the count of each element at their respective index in c.
    for(int i=0;i<n;i++){
    	c[A[i]]++;
	}
	int i=0, j=0;
	
//	Filling values in array A
	while(i<max+1){
		if(c[i]>0){
			A[j++]=i;
			c[i]--;
		}
		else
			i++;
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
	countSort(arr, n);
	cout<<"\nSorted Array : \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}
