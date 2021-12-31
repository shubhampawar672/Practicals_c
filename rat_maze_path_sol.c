//1.	Write a C program to solve Rat in a Maze problem using Backtracking technique in Stack data structure.
//shubham pawar

#include<stdio.h>
#include<stdlib.h>
#define n 4
int solution[n][n];
int maze[n][n]={
                 {1, 1, 1, 0},
                 {1, 1, 0, 1},
                 {0, 1, 1, 1},
                 {0, 1, 0, 1}
                };


void printpath()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",solution[i][j]);
        }
        printf("\n");
    }
}
 int isvalidcell(int a, int b)
 {
     if(a>=0 && a<n  &&b>=0 && b<n && maze[a][b]==1)
        return 1;
     else
        return 0;
 }

 int solvemaze(int a,int b)
 {
     if(a==n-1 && b==n-1 )
     {
         solution[a][b]=1;
         return 1;
     }
     if(isvalidcell(a,b)==1)
     {
         solution[a][b]=1;
         if(solvemaze(a+1,b)==1)
            return 1;
          if(solvemaze(a,b+1)==1)
            return 1;
            solution[a][b]=0;
            return 0;
     }
     return 0;
 }
 int findsolution()
 {
     if(solvemaze(0,0)==0)
     {
         printf("no path...!! \n");
         return 0;
     }
     printpath();
     return 1;
 }
 void main()
 {
     findsolution();
 }
