#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count;
int bfsm(char T[20],char P[10])
{
    int m,n,i,j;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m && (P[j]==T[i+j]))
        {
            count++;
            j=j+1;
        }
        count++;
        if(j==m)
            return i+1;
    }

    return -1;
}
int main()
{
    char p[10],t[20];
    printf("\nEnter the text :");
    scanf("%s",t);
    printf("\nEnter the pattern :");
    scanf("%s",p);
    int flag = bfsm(t,p);
    if(flag == -1)
        printf("\nRequired pattern not found ");
    else
        printf("\nPattern found at position %d",flag);
    printf("\nThe count is %d",count-1);
    return 0;
}
