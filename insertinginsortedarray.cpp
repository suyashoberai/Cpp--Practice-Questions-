#include<iostream>
using namespace std;

int main(){
    int x,i,n;
    int A[9]={2,4,5,7,8,9,10,12};
    n=9;
    x=6;
    i=n-2;
    while(A[i]>x)
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;

    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}