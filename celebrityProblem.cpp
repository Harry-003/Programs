#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int celebrity(int M[][3], int n) 
    {
        
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(i);    
        }
        while(st.size()!=1){
            int A = st.top();
            st.pop();
            int B = st.top();
            st.pop();
            
            if(M[A][B]==1){
                st.push(B);
            }
            if(M[B][A]==1){
                st.push(A);
            }
        }
        int c = st.top();
        
        bool rowCheck = false;
        int zeroCount = 0;
        for(int i=0;i<n;i++){
            if(M[c][i]==0){
                zeroCount++;
            }
        }
        if(zeroCount==n){
            rowCheck = true;
        }
        bool colCheck = false;
        int oneCount = 0;
        for(int i=0;i<n;i++){
            if(M[i][c]==1){
                oneCount++;
            }
        }
        if(oneCount==n-1){
            colCheck = true;
        }
        
        if(rowCheck == 1 && colCheck == 1){
            return c;
        }
        return -1;
    }
    int main (){
        int M[3][3] = { {0,1,0},{0,0,0},{0,1,0} };
        int c = celebrity(M,3);

        cout<<"Celebrity: "<<c;    
    }