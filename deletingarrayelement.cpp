#include<iostream>
using namespace std;

int main(){
    int A[7]={2,7,9,4,6,8,5};
    int length=7;
    for(int i=3;i<length-1;i++){  //counter will start from the index which's value we want to delete
        A[i]=A[i+1]; //assigning next element value at this given index
    }
    length--;
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}