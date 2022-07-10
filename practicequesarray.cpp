#include<iostream>
using namespace std;

// int main(){
//     int A[10]={2,7,4,5,8,3};
//     //for displaying the array
//     int length=7;
//     for(int i=0;i<length;i++){
//         cout<<A[i]<<" ";
//     }
// }

//reversing an array

// int main(){
//     int A[7]={2,4,3,5,7,6,9};
//     int length=7;

//     for(int i=length-1;i>=0;i--){
//         cout<<A[i]<<" ";
//     }
// }


//calculate sum of an array

// int main(){
//     int A[7]={2,4,5,7,3,8,9};
//     int sum=0;
//     int length=7;
//     for(int i=0;i<length;i++){
//     sum=sum+A[i];
//     }
//     cout<<"sum is: "<<sum;
// }


//calculate average of an array

// int main(){
//     int A[7]={2,4,5,7,3,8,9};
//     double avg;
//     int sum=0;
//      double length=7;
//      for(int i=0;i<length;i++){
//      sum=sum+A[i];
//     }
//     avg=sum/length;
//     cout<<"avg is: "<<avg;
// }


//find largest element of an array

// int main(){
//     int A[7]={2,4,3,5,7,8,9};
//     int n=7,max;
//     max=A[0];

//     for(int i=1;i<n;i++){
//         if(A[i]>max)
//         {
//             max=A[i];
//         }
//     }
//     cout<<"largest element is: "<<max;
// }


//find second largest element of an array

// int main(){
//     int A[7]={2,4,3,5,7,8,9};
//     int n=7,max,secondmax;
//     max=0;
//     secondmax=0;

//     for(int i=0;i<n;i++){
//         if(A[i]>max)
//         {
//             secondmax=max;
//             max=A[i];
//         }
//         else{
//             if(A[i]>secondmax && A[i]<max)
//         {
//             secondmax=A[i];
//         }
//         }
//     }
//     cout<<"second largest element is: "<<secondmax;
// }


//find smallest element of an array

// int main(){
//     int A[7]={2,4,1,5,7,8,9};
//     int n=7,min;
//     min=A[0];

//     for(int i=1;i<n;i++){
//         if(A[i]<min)
//         {
//             min=A[i];
//         }
//     }
//     cout<<"smallest element is: "<<min;
// }