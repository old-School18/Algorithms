#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxno=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxno)
        {
            maxno=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==maxno)
        {
            cout<<i<<" ";
        }
    }
    cout<<maxno;
}