//to sort an array of 0's,1's,and 2's in linear time,with 0's at beging ,1's in middle and 2's at last of array
#include<iostream>
using namespace std;
void  swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;

}
int* asort(int *a,int n){
	int low=0,mid=0,high=n-1;   //variables are set

	while(mid<=high){
		switch(a[mid]){
			case 0:     //if a[mid]==0
				//swap a[low] & a[mid], swapping by reference
				swap(&a[low],&a[mid]);
				low++;      //increment low
				mid++;      //increment mid
				break;
			case 1:     //if a[mid]==1
				mid++;      //increment mid
				break;
			case 2:     //if a[mid]==2
				//swap a[mid] & a[high], swapping by reference
				swap(&a[mid],&a[high]);
				high--;     //decrement high
				break;
		}
	}
	//returning adress of array(sorted)
	return a;
}

int main() {
	int n;

	cout<<"enter no of array elements\n";
	//input array length
	cin>>n;
	int *a=(int*)malloc(sizeof(int)*n);

	cout<<"enter array elements\n";
	//input array elements
	for(int j=0;j<n;j++)
		cin>>a[j];
	//array is modified
	a=asort(a,n);
	cout<<"after being sorted..............\n";
	//printing the sorted array
	for(int j=0;j<n-1;j++)
		cout<<a[j];
	    cout<<a[n-1];

	return 0;
}
