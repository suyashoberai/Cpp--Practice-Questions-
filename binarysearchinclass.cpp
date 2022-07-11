#include<iostream>
using namespace std;

class Array
{
    public:
    int bin_search(int A[],int length, int key)
    {
        int l=0;
        int h=6;
        int mid;

        while(l<=h)
        {
            mid=(l+h)/2;
            if(key==A[mid])
            {
                // cout<<"element found at: "<<mid;
                return mid;
            }

            else if(key<A[mid])
            {
                h=mid-1;
            }
            else
            {
            l=mid+1;
            }
            
        }
            //  cout<<"element not found";
             return -1;
    }
};

int main()
{
    Array arr;
    int A[7]={1,3,4,5,7,8,10};
    int length=7;
    int n;
    cout<<"enter no. to be found: ";
    cin>>n;
    int key=n;
    cout<<arr.bin_search(A,length,key);
    return 0;

}