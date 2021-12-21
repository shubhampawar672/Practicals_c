//program to find minimum number of step to convert an array into palindromic array
#include<iostream>
using namespace std;
int minnoofstep(int arr[],int s, int e)
{ int i=s;
    int j=e;
    if(i==j)
        return 0;
        if(i<=j)
        {
            if(arr[i]==arr[j])
                return minnoofstep(arr,i+1,j-1);
            else if(arr[i]>arr[j])
            {


                arr[j-1]=arr[j]+arr[j-1];
            return minnoofstep(arr,i,j-1)+1;}
            else
            {
                arr[i+1]=arr[i]+arr[i+1];
                return minnoofstep(arr,i+1,j)+1;
            }

        }
        return 0;

}

int main()
{
    int x;
    cout<<"enter size of array\n";
    cin>>x;
    int *arr= new int[x];
    cout<<"enter array element:\n";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];

    }
    cout<<"number of step to make array palindromic = ";
    cout<<minnoofstep(arr,0,x-1);
    return 0;
}
