#include <stdio.h>
#include <stdlib.h>
int count=0;
void insertionsort(int A[100],int n)
{

    int i,j,item;
    for(i=1;i<=n-1;i++)
    {
        item=A[i];
        j=i-1;
        while(j>=0&&A[j]>item)
        {
            count++;
            A[j+1]=A[j];
            j=j-1;
        }
        count++;
        A[j+1]=item;

    }
     printf("count=%d",count);
}
int main()
{
    int A[100],n,i,j;
    printf("\nRead the no of elements:");
    scanf("%d",&n);
    printf("\nRead the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    insertionsort(A,n);
    printf("\nElements after sorting\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nNumber of times the basic operation gets executed is %d\n",count);
    return 0;
}
