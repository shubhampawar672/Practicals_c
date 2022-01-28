#include <iostream>
#define max 3

using namespace std;

int main()
{
   int arr[max][max];
   cout<<"Enter matrix element\n";
   for(int i=0;i<max;i++)
   {
        for(int j=0;j<max;j++)
        {

            cin>>arr[i][j];
        }
    }
    cout<<"Input matrix is : \n";
     for(int i=0;i<max;i++)
   {
        for(int j=0;j<max;j++)
        {

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Upper Diagonal traversal : \n";
      for(int g=0;g<max;g++)
      {
          for(int i=0,j=g;j<max;i++,j++)
          {
              cout<<arr[i][j]<<" ";
          }

    }
      cout<<"\nLower Diagonal traversal : \n";
     for(int g=0;g<max;g++)
      {
          for(int j=0,i=g;i<max;i++,j++)
          {
              cout<<arr[i][j]<<" ";
          }

    }


    return 0;
}
