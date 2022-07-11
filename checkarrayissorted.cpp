#include<iostream>
using namespace std;

bool arrayissorted(int A[],int n)
{
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1])
        {
            return false;
        }
    }
        return true;
}

int main(){
    int A[8]={2,3,4,5,6,7,8,9};
    int n=8;
    cout<<arrayissorted(A,n);
}