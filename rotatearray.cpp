#include<iostream>
using namespace std;

int rotLeft(int arr[], int n, int d)
{
    int i, j;
    int first;
    for(i=0; i<d; i++)
    {
        first = arr[0];
        for(j=0; j<n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[j] = first;
    }
    return *arr;
}
int rotRight(int arr[], int n, int d)
{
    int i, j;
    int first;
    for(i=0; i<d; i++) { first = arr[n-1]; for(j=n-1; j>=0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = first;
    }
    return *arr;
}
int main()
{
    int n, d, i;
    char choice;
    cout<<"Enter size of the Array = "; cin>>n;
    int list[n];
    cout<<"Enter element of the Array = ";
    for(i=0; i<n; i++) { cin>>list[i];
    }
    cout<<"Enter number of time rotation need to be done = "; cin>>d;
    cout<<"What type of rotation need to be done (L/R)? = "; cin>>choice;    
    if(choice=='L')
    {
        rotLeft(list, n, d);
        for(i=0; i<n; i++)
        {
            cout<<list[i]<<" ";
        }
    }
    else if(choice=='R')
    {
        rotRight(list, n, d);
        for(i=0; i<n; i++)
        {
            cout<<list[i]<<" ";
        }
    }
    else
    {
        cout<<"Not a valid choice";
    }
    return 0;   
}