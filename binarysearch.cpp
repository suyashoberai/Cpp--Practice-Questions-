// #include<iostream>
// using namespace std;

// int main(){
//     int A[7]={2,4,6,7,9,11,13};
//     int n;
//     cout<<"enter no. to be found: ";
//     cin>>n;
//     int l=0,h=6,key=n,mid;

//     while(l<=h){
//         mid=(l+h)/2;
//         if(key==A[mid])
//         {
//             cout<<"element found at: "<<mid;
//             return 0;
//         }
//         else if(key<A[mid])
//         h=mid-1;
//         else l=mid+1;
//     }
//     cout<<"not found";

// }


#include<iostream>
using namespace std;

int main(){
    int A[10]={2,3,5,7,9,10,13,14,17,19};
    int l,h,mid,key,n;
    cout<<"enter no. to be found: ";
    cin>>n;
    l=0;
    h=9;
    key=n;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"elemnent found at: "<<mid;
            return 0;
        }
        else if(key<A[mid])
        h=mid-1;
        else l=mid+1;
    }
    cout<<"element not found";
}