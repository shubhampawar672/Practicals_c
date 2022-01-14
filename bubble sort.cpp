//Exp 15
//Shubham Pawar, 20141236
//Bubble sort
#include <iostream>

using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
             if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
        }

     for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
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

    return 0;
}
