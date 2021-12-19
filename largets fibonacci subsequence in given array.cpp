//Given an array with positive number the task to find the largest subsequence from array that contain elements which are Fibonacci numbers.
#include<iostream>
#include<cmath>
using namespace std;

int isfibnum(int x)
{
    int x1,x2;
    x1=sqrt(5*x*x+4);
    x2=sqrt(5*x*x-4);

    if(x1*x1==(5*x*x+4))
        return 1;
    if(x2*x2==(5*x*x-4))
        return 1;
        return 0;
}

void largestfibsubsequence(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        if(isfibnum(arr[j]))
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int n;
    cout<<"enter size of the array:\n";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter array element \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    largestfibsubsequence(arr,n);
    return 0;
}
