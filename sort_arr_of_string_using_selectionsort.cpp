//Exp 16
//shubham pawar ,20141236
//sort array of string using selection sort
#include <iostream>
#include<cstring>
#define max 100

using namespace std;
void selectionsort(char arr[][max],int n)
{
    int i,j,minidx;
    char minstr[max];
    for(i=0;i<n-1;i++)
    {minidx=i;
    strcpy(minstr,arr[i]);
        for(j=i+1;j<n;j++)
        {
            if(strcmp(minstr,arr[j])>0)
            {
                strcpy(minstr,arr[j]);
                minidx=j;
            }

        }
        if(minidx!=i)
        {
            char temp[max];
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[minidx]);
            strcpy(arr[minidx],temp);
        }
    }
}
int main()
{
    char arr[][max]={"Geeks","GFG","Practicegfg"};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    selectionsort(arr,n);
    cout<<"sorted array of string is:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"    ";
    }
    return 0;
}
