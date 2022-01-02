// to calculate stock span
#include <iostream>
#include<stack>
#define max 30
//shubham pawar

using namespace std;

void stockspan(int arr[],int n)
{  stack<int>st;
     st.push(0);
    int span[n];
    span[0]=1;
    for(int i=1;i<n;i++)
    {
        while(st.size()>0&&arr[i]>arr[st.top()])
        {
            st.pop();
        }
        if(st.size()==0)
        {
            span[i]=i+1;
        }
                    else
                    {
                        span[i]=i-st.top();
                    }
                    st.push(i);
    }
    for(int i=0;i<n;i++)
  {
      cout<<span[i]<<" ";
  }
}

int main()
{
   int arr[]={100,80,60,70,60,75,85};
   int n=sizeof(arr)/sizeof(arr[0]);
   stockspan(arr,n);

   return 0;
}
