// to find next higher permutation,
#include<iostream>
using namespace std;
void Sort(int arr[],int n)
{
    int j,i,t;
    for(j=0;j<n;j++)
    { for(i=j+1;i<n;i++)
    {
        if(arr[j]>arr[i])
        {
            t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;
        }
    }

    }
    for(j=0;j<n;j++)
        cout<<arr[j]<<" ";
}
 void print( int arr[],int n)
 {
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
     cout<<endl;

 }
 void permutation_next(int arr[], int n)
 {
     int temp,k=-1,l,i;
     for(i=0;i<n-1;i++)
     {
         if(arr[i+1]>arr[i])
            k=i;
     }
     if(k==-1)
     {
        // cout<<"no higher permutation \n";
        Sort(arr,n);
        return ;
     }
     for(i=k+1;i<n;i++)
     {
         if(arr[i]>arr[k])
            l=i;
     }
     temp=arr[k];
     arr[k]=arr[l];
     arr[l]=temp;
     for(i=0;i<=k;i++)
        cout<<arr[i]<<" ";
     for(i=n-1;i>k;i--)
        cout<<arr[i]<<" ";
     cout<<endl;
 }
 int main()
 {   int n;
 cout<<"enter no of element\n";
 cin>>n;
     int *arr=new int(n);//{1,3,2,5,4};
     //=sizeof(arr)/sizeof(arr[0]);
     cout<<"enter permutation\n";
     for(int i=0;i<n;i++)
        cin>>arr[i];
     cout<<"current permutation \n";
     print(arr,n);
     cout<<" next permutation \n";
     permutation_next(arr,n);;
     return 0;
 }
