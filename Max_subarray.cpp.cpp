#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
 max_sum(int arr[],int n){
   // int ans=INT_MIN;
   if(n==1)
       {

        return arr[0];}
/*for(int i=0;i<n;i++){
    int sum=0;
    for(int j=1;j<n;j++){
        if(i+j>n)
            break;
        sum+=arr[i+j-1];
        ans=max(ans,sum);
    }
}*/
//return ans;
int m=n/2;
int leftms=max_sum(arr,m);
int rightms=max_sum(arr+m,n-m);
int leftsum=INT_MIN,rightsum=INT_MIN,sum=0;
for(int i=m;i<n;i++){
    sum+=arr[i];
    rightsum=max(rightsum,sum);
}
sum=0;
for(int i=(m-1);i>=1;i--){
    sum+=arr[i];
    leftsum=max(leftsum,sum);
}
int ans=max(leftms,rightms);
return max(ans,rightsum+leftsum);
}
int main(){
int arr[]={6,77,5,7,1};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<max_sum(arr,n)<<endl;
return 0;

}
