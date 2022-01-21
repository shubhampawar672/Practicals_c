//Experiment 17
//shubham pawar, 20141236 ,SY,IT
//Write a program to  count swaps required to sort an array using Insertion Sort
#include <iostream>
  int temp[100];

using namespace std;
 int Merge(int A[], int left,int mid, int right)
{
    long int swaps = 0;
int i = left, j = mid, k = left;
while (i < mid && j <= right) {

        if (A[i] <= A[j]) {
            temp[k] = A[i];
            k++, i++;
        }
        else {
            temp[k] = A[j];
            k++, j++;
            swaps += mid - i;
        }
    }
    while (i < mid) {
        temp[k] = A[i];
        k++, i++;
    }

    while (j <= right) {
        temp[k] = A[j];
        k++, j++;
    }

    while (left <= right) {
        A[left] = temp[left];
        left++;
    }

    return swaps;
}

int mergeinsertionswap(int arr[],int l,int r)
{
    int swaps=0;

    if(l<r)
    {
          int mid=l+(r-l)/2;
          swaps+=mergeinsertionswap(arr,l,mid);
          swaps+=mergeinsertionswap(arr,mid+1,r);
          swaps+=Merge(arr,l,mid+1,r);
    }
    return swaps;
}

int main()
{
   int arr[] = { 2, 1, 3, 1, 2,8,32,11,9,6 };
    int size= sizeof(arr) / sizeof(arr[0]);
    cout << mergeinsertionswap(arr, 0, size - 1);
    return 0;
}
