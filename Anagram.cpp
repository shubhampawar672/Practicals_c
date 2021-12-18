//Checking Anagrams (check whether two string is anagrams or not)
#include<iostream>

using namespace std;
int anagram(char str1[27],char str2[27])
{
    int n1=0,n2=0;
    int arr1[26]={0},arr2[26]={0};
    for(int i=0;str1[i]!='\0';i++)
    {
        n1++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        n2++;
    }
    if(n1!=n2)
        return 0;
    for(int i=0;str1[i]!=0;i++)
    {
        arr1[str1[i]-'a']++;
    }
     for(int i=0;str2[i]!=0;i++)
    {
        arr2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i])
            return 0;
    }
    return 1;

}

int main()
{
    char str1[27],str2[27];
    cout<<"enter first string\n";
    gets(str1);
    cout<<"enter second string:\n";
    gets(str2);
    if(anagram(str1,str2))
        cout<<"strings are anagrams.";
    else
        cout<<"not anagrams.\n";
    return 0;
}
