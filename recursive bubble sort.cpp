//Exp 15
//Shubham Pawar, 20141236
//2)recursive Bubble sort
#include <iostream>

using namespace std;
void bubblesort(int arr[],int n)
{
    if(n==1)
        return;
    for(int i=0;i<n-1;i++)
    {
      if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);
}

int main()
{
    int n;
    cout<<"enter array size:\n";
    cin>>n;
  int *arr=new int(n);
  cout<<"enter array element:\n";
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  cout<<"sorted array is:\n";
 bubblesort(arr,n);
   for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }

    return 0;
}
