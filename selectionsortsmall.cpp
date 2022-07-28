#include<iostream>
using namespace std;

void display(int A[]){
    for(int i=0;i<7;i++){
        cout<<A[i]<<" ";
    }

}

int main(){
    int A[7]={3,5,4,1,6,9,8};

    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(A[j]<A[i]){
                swap(A[i],A[j]);
            }
        }
    }
    display(A);
}