#include <stdio.h>
#include <stdlib.h>
# define SIZE 100
int count;
void merge(int A[SIZE],int l,int m,int r)
{
    int i,j,k,B[SIZE];
    i=l;
    j=m+1;
    k=l;
    while(i<=m && j<=r)
    {
        count++;
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    while(i<=m)
        B[k++]=A[i++];
    while(j<=r)
        B[k++]=A[j++];
    for(i=l;i<=r;i++)
        A[i]=B[i];
}
void mergesort(int A[SIZE],int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(A,l,m);
        mergesort(A,m+1,r);
        merge(A,l,m,r);
    }
}
int main()
{
    int a[SIZE],i,n;
    printf("\nEnter the number of elements");
    scanf("%d",&n);
    printf("\nEnter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("\nSorted array is ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nThe Count is %d",count);
    return 0;
}
