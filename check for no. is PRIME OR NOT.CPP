          //CODE TO CHECK THE NO. IS PRIME OR NOT 
  
#include <iostream>
using namespace std;

int main() {
	int n,count=0;
	cout<<"ENTER THE NO. TO CHECK IT IS PRIME OR NOT"<<endl;
	cin>>n;           //TAKING INPUT
	for(int i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
	        count++;
	    }
	}
	if(count==2)
	{
	    cout<<"YES NO. IS PRIME"<<endl;         //PRINTING THE OUTPUT
	}
	else
	{
	    cout<<"NUMBER IS NOT PRIME"<<endl;      //PRINTING THE OUTPUT
	}
	return 0;
}
