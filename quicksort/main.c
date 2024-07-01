#include <stdio.h>
#include <stdlib.h>

int count;
int parttition(int a[10], int low, int high) {
    int i,j,pivot,temp;
    i = low+1;
    j = high+1;
    pivot = a[low];
    while(1) {
        while ((pivot>=a[i]) && i <= high) {
            i++;
            count++;
        }
        count++;
    }
    while((pivot <= a[j]) && (j>=low)) {
        j--;
        count++;
    }
    count++;
    if (i<j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    else {
        temp = a[low];
        a[low] = a[j];
        a[j] = temp;
        return j;
    }
}
void quick sort (int a[10],int low, int high) {
    int i,j;
    if (low<high) {
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
    }
}
int main () {
    int a[10];
    int i,n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=1;i<=n;i++) {
            scanf("%d", a[i]);
    quicksort(a,1,n);
    printf("sorted elements : ");
    for(i=1;i<=n;i++) {
        printf("%d", a[i]);
    }
    printf("number of counts: %d", count)

    }
}
