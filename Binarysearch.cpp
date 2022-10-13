#include
using namespace std;
int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}
int main(void) {
   int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num;
   cout << "Enter the number to search: \n";
   cin >> num;
   int index = binarySearch (arr, 0, n-1, num);
   if(index == -1){
      cout<< num <<" is not present in the array";
   }else{
      cout<< num <<" is present at index "<< index <<" in the array";
   }
   return 0;
}
Output
Enter the numberto search
20
20 is present at index 5 in the array
In the above program, binarySearch() is a recursive function that is used to find the required element in the array using binary search. The function takes the array, its lower bound and upper bound as well as the number to be found as parameters. This is shown below.

int binarySearch(int arr[], int p, int r, int num)
Then the midpoint of the array is calculated. If the value at the midpoint is equal to num, then it is returned. If the value is greater than num, then array calls itself recursively with the lower bound p and upper bound mid-1. If the value is less than num, then array calls itself recursively with the lower bound mid+1 and upper bound r. This can be seen by the following code snippet.

int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}
In the main() function, the array arr[] is defined. The size of the array is calculated and the number to be found is specified. Then binarySearch() is called to find the index of the number. If the value returned by binarySearch() is -1, then the number is not in the array. Otherwise, the index value is returned. This is given below.

int main(void) {
   int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num = 33;
   int index = binarySearch (arr, 0, n-1, num);
   if(index == -1)
      cout<< num <<" is not present in the array";
   else
      cout<< num <<" is present at index "<< index <<" in the array";
   return 0;
}
