#include<iostream>
using namespace std;

int main(){
    int A[10]={2,7,4,5,8,3};
    //for displaying the array
    int length=7;
//     for(int i=0;i<length;i++){
//         cout<<A[i]<<endl;
//     }
// 

//inserting an element in middle of an array
for(int i=length;i>2;i--) //give index value in which you want to insert an element in i>index
{
    A[i]=A[i-1]; //copying value from the previous element
}
A[2]=11; //assign value to that index value

length++;
for(int i=0;i<length;i++){
    cout<<A[i]<<" ";
}
}