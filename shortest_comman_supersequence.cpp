#include <bits/stdc++.h>
using namespace std;
int static dp[1000][1000];

int lcs(string &x, string &y,int n, int m){
    if(n==0 || m==0){return 0;}
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    if(x[n-1]==y[m-1]){
       return dp[n][m]= 1+lcs(x,y,n-1,m-1);
    }
    else
    return dp[n][m]=max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));

}

int main(){
    memset(dp,-1,sizeof(dp));
    string x,y;
    cin>>x;
    cin>>y;
    int n=x.length();
    int m=y.length();

    //just change lcs length code to n+m-lcs() remaining code remains same
    cout<<n+m-lcs(x,y,n,m);

}

