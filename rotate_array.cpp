#include<iostream>
#include<vector>
using namespace std;

void swap(int *x, int *y){
        int temp = *x;
        *x= *y;
        *y = temp;
}
void reverse (vector<int>& nums, int left, int right){
    while(left < right){
            swap(&nums[left], &nums[right]);
            left ++;
            right--;
    }
}
void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
}

int main(){
    vector<int> ar(7);
    for(int i=0; i<7; ++i){
        ar[i] = i+1;
    }
    int rotateBy = 3;
    rotate(ar,3);
    for(int i=0; i<7; ++i){
        cout << ar[i] << " ";
    }
    return 0;
}