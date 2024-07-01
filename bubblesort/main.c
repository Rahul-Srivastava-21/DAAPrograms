#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count=0;
void bubblesort(int a[SIZE],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            count++;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The count is %d",count);
}
int main()
{
    int a[SIZE],i,n;
    printf("\nEnter the number of elements");
    scanf("%d",&n);
    printf("\nEnter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printf("\nSorted array is ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
