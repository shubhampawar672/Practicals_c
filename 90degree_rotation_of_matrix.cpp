#include <iostream>

using namespace std;
void print(int arr[][3])
{
      for(int i=0;i<3;i++)
  {

      for(int j=0;j<3;j++)
      {

          cout<<arr[i][j]<<" ";
          }
      cout<<endl;
  }

}

int main()
{
  int arr[3][3];
  cout<<"enter Matrix element\n";
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          cin>>arr[i][j];
        }
  }
  cout<<"Input Matrix\n";
  print(arr);
  cout<<"Transpose Matrix \n";
   for(int i=0;i<3;i++)
  {
      for(int j=i;j<3;j++)
      {
          int temp=arr[i][j];
          arr[i][j]=arr[j][i];
          arr[j][i]=temp;
        }
    }
    print(arr);
    cout<<"clockwise 90 degree rotation\n";
    for(int i=0;i<3;i++)
    {
        int l=0;
       int r=2;
        while(l<r)
        {
            int temp=arr[i][l];
          arr[i][l]=arr[i][r];
          arr[i][r]=temp;
          l++;
          r--;
        }
    }
    print(arr);
   /* cout<<"Anticlockwise 90 degree rotation\n";
    for(int i=0;i<3;i++)
    {
        int l=2;
       int r=0;
        while(r<l)
        {
            int temp=arr[l][i];
          arr[l][i]=arr[r][i];
          arr[r][i]=temp;
          l--;
          r++;
        }
    }
    print(arr);*/
  return 0;
}
