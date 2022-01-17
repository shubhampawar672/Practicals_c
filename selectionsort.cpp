//Experiment 16
//Shubham Pawar,20141236
//Selection sort
#include <iostream>

using namespace std;

int *selectionsort(int arr[],int n)
{  int minidx,j;
    for(int i=0;i<n-1;i++)
    {  minidx=i;
        for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[minidx])
        {
            minidx=j;

        }
    }
    swap(arr[i],arr[minidx]);
    }
    return arr;
}
int main()
{
    int n;
    cout<<"enter array size:\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
