#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count=0;
void selectionsort(int a[SIZE],int n)
{
    int i,j,temp,min=0;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            count++;
            if(a[j]<a[min])
            {
               min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
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
    selectionsort(a,n);
    printf("\nSorted array is ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
