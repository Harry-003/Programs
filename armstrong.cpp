#include<iostream>
#include<iomanip>
int main(){
    int num,r,sum,temp;
    for(num=1;num<=500;num++){
         temp=num;
         sum = 0;
         while(temp!=0){
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             cout << num << setw(2);
    }
    return 0;
}