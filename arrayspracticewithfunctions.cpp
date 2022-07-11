#include<iostream>
using namespace std;

//displaying an array

// class Array{
//     public:
//     void display(int A[],int n)
//     {
//     for(int i=0;i<n;i++)
//     {
//         cout<<A[i]<<" ";
//     }
// }
// };

// int main(){
//     Array arr;
//     int n=7;
//     int A[7]={2,3,4,6,5,7,9};
//     arr.display(A,n);
//     return 0;
// }


//reversing an array

// class Array{
//     public:
//     void display(int A[],int n)
//     {
//         for(int i=n-1;i>=0;i--)
//         {
//             cout<<A[i]<<" ";
//         }
//     }


// };

// int main(){
//     Array arr;
//     int n=7;
//     int A[7]={2,3,4,6,5,7,8};
//     arr.display(A,n);
// }


//calculate sum of an array

// class Array{
//     public:
//     void display(int A[],int n, int sum)
//     {
//         for(int i=0;i<n;i++){
//             sum=sum+A[i];
//         }
//         cout<<"sum is: "<<sum;
//     }
// };

// int main(){
//     Array arr;
//     int sum=0;
//     int n=7;
//     int A[7]={2,3,5,4,6,7,8};
//     arr.display(A,n,sum);
// }

//calculate average of an array

// class Array{
//     public:
//     void display(int A[],int n,int sum,int avg)
//     {
//         for(int i=0;i<n;i++)
//         {
//             sum=sum+A[i];
//         }
//         avg=sum/n;
//         cout<<"average is: "<<avg;
//     }
// };

// int main(){
//     Array arr;
//     int n=7;
//     int sum=0;
//     int avg=0;
//     int A[7]={2,4,6,8,9,7,6};
//     arr.display(A,n,sum,avg);

// }

//find largest element of an array

// class Array{
//     public:
//     void display(int A[],int n,int maxx)
//     {
//         maxx=A[0];
//         for(int i=0;i<n;i++)
//         {
//             if(A[i]>maxx){
//                 maxx=A[i];
//             }
//         }
//         cout<<"largest element is: "<<maxx;
//     }
// };

// int main(){
//     Array arr;
//     int n=7;
//     int A[7]={2,3,4,5,7,6,9};
//     int maxx;
//     arr.display(A,n,maxx);
    
// }


//find smallest element of an array

// class Array{
//     public:
//     void display(int A[],int n,int small)
//     {
//         small=A[0];
//         for(int i=0;i<n;i++)
//         {
//             if(A[i]<small){
//                 small=A[i];
//             }
//         }
//         cout<<"smallest element is: "<<small;
//     }
// };

// int main(){
//     Array arr;
//     int n=7;
//     int A[7]={2,3,4,5,7,6,9};
//     int small;
//     arr.display(A,n,small);
    
// }


//find second largest element of an array

// class Array{
//     public:
//     void display(int A[],int n,int maxx,int secondmaxx)
//     {
//         for(int i=0;i<n;i++)
//         {
//             if(A[i]>maxx)
//             {
//                 secondmaxx=maxx;
//                 maxx=A[i];
//             }
//             else{
//                 if(A[i]>secondmaxx && A[i]<maxx)
//             {
//                 secondmaxx=A[i];
//             }
//         }
//         }
//         cout<<"second largest element is: "<<secondmaxx;
//     }
// };

// int main(){
//     Array arr;
//     int n=7;
//     int A[7]={2,3,5,6,7,11,14};
//     int maxx=0;
//     int secondmaxx=0;
//     arr.display(A,n,maxx,secondmaxx);
// }