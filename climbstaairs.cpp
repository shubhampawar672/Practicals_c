#include <iostream>

using namespace std;
int stair(int n)
{
     int *arr=new int(n+1);
   arr[0]=1;
   arr[1]=1;
   for(int i=2;i<=n;i++)
   {
       arr[i]=arr[i-1]+arr[i-2];
   }
   return arr[n];

}

int main()
{
   int n;
   cin>>n;
   cout<<stair(n);


    return 0;
}
