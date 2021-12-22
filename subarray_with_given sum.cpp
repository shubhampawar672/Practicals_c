// Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to the given number.
//shubham pawar
#include<iostream>
using namespace std;
int top=-1;
int arrs[10];
void push(int x)
{
    arrs[++top]=x;
}
int pop()
{
    return arrs[top--];
}
void findsubarr(int arr[],int n,int sum)
{

    int curr_sum=0;
    for(int i=0;i<n;i++)
    {  curr_sum=arr[i];

        for(int j=i+1;j<n;j++)

        {
            curr_sum=curr_sum+arr[j];
            if(curr_sum==sum)
            {

                push(i);
                push(j);
                return;

            }
                if(curr_sum>sum)
                   {

                       break;
                   }
        }
    }
   push(-1);
}
int main()
{
    int Size,i,sum;
    cout<<"enter size of array\n";
    cin>>Size;
    int *arr=new int[Size];
    cout<<"enter array element\n";
    for(i=0;i<Size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter required sum.\n";
    cin>>sum;
    findsubarr(arr,Size,sum);

    int e=pop();
    if(e==-1)
        cout<<"sub array not found";


    else
    {
        int s=pop();
    for(int k=s;k<=e;k++)
    {
        cout<<arr[k]<<" ";
    }
      }
      return 0;
}
