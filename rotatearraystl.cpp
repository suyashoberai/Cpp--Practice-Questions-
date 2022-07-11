// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution{
//     public:
//     void rotate(vector<int>& nums,int k){
//         vector<int>temp(nums.size());

//         for(int i=0;i<nums.size();i++){
//             temp[(i+k)%nums.size()]=nums[i];
//         }
//         nums=temp;
//     }

// };

#include<iostream>
using namespace std;

// int main(){
//     int A[5]={2,4,5,6,7};
//     int length=7;
//     int temp;
//     int k=2;int i;

//     for(i=0;i<length;i++)
    
//         temp[(i+k)%length]=length[i];
        
    
//     length=temp;
//     // temp=length;
//     for(int i=0;i<length;i++){
//         cout<<length;
//     }
// }

void RotArray(int A[7],int n,int k)
    {
        int i,B[n];

        for(i=0;i<n;i++)
        B[(i+k)%n]=A[i];

        for(i=0;i<n;i++)
        cout<<B[i]<<" ";
    }

int main(){
    int A[7]={2,5,3,7,6,8,9};
    // int n=7;
    // int k=2;
    RotArray(A,7,4);

}


// void rotate(int A[],int n);
// int main(){
//     int m,n;
//     cout<<"enter size of array: "<<endl;
//     cin>>n;
//     int A[n];
//     cout<<"enter array elements: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//     }
//     cout<<"enter no. of times to rotate at right: "<<endl;
//     cin>>m;
//     m=m%n;
//     cout<<"array before rotation: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<" ";
//     }

//     for(int i=1;i<=m;i++){
//         rotate(A,n);
//     }
//     cout<<endl<<"array after rotation: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<" ";

//     }
//     cout<<endl;
//     return 0;
    
// }
// void rotate(int A[],int n){
//     int last;
//     last=A[n-1];
//     for(int i=n-1;i>0;i--){
//         A[i]=A[i-1];
//     }
//     A[0]=last;
// }
