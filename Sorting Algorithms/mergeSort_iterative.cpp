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

void mergeSort(int arr[], int n){
	int p, l, h, mid, i;
	for(p=2;p<=n;p=p*2){
		for(int i=0;i+p-1<n;i=i+p){
			l = i;
			h = i+p-1;
			mid=(l+h)/2;
			merge(arr, l, mid, h);
		}
	}
	if(p/2<n)
	merge(arr, 0, p/2-1,n);
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
	mergeSort(arr, n);
	cout<<"\nSorted Array : \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}
