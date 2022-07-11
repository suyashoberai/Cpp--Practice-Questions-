#include<iostream>
using namespace std;

int main(){
    int A[5]={2,5,9,6,1};
    int n=5,max;
    max=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"max is "<<max;
}