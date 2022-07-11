#include<iostream>
using namespace std;

int main(){
    int A[7]={2,6,9,3,1,5,10};

    int length=7;
    int key=9;
    for(int i=0;i<length;i++)
    {
        if(key==A[i]){
        cout<< i;
        return 0;}
    }
    cout<<"not found";
    return 0;

//     for (int i=0;i<length;i++){
//         cout<<A[i];
//     }
}