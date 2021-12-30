//to find max subarray using kadan's algoritham
#include <iostream>
#include<climits>

using namespace std;

int max_subarray(int arr[],int n)
{
    int max_so_far=INT_MIN;
    int max_till_current=0;
    for(int i=1;i<n;i++)
    {
        max_till_current=max_till_current+arr[i];
        max_till_current=max(max_till_current,arr[i]);
        max_so_far=max(max_so_far,max_till_current);
    }
    return max_so_far;
}

int main()
{
    
    int arr[]={-5,-4,-3,-2,-8,8,4,-1,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<max_subarray(arr,size);
    return 0;
}
