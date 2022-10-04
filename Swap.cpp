#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10, b = 20;
    cout<<"Before Swapping:\t"<<a<<"\t"<<b;
    swap(&a, &b);
    cout<<"\nAfter Swapping:\t"<<a<<"\t"<<b;
    return 0;
}
