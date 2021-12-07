#include<iostream>
#include<cstring>
using namespace std;
int solve(char str[])
{

    int left=0,right=strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right]){

            return 0;

        }
        left++;
        right--;
    }
    return 1;
}
int main(){

char str[8];
cin>>str;
cout<<solve(str);
return 0;
}
