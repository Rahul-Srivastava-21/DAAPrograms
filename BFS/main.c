#include <stdio.h>
#include <stdlib.h>
void bfs(int a[10][10],int n,int visited[10],int source)
{
    int queue[10],rear=-1,front=0,delnode,i;
    visited[source]=1;
    queue[++rear]=source;
    while(front<=rear)
    {
        delnode=queue[front++];
        for(i=1;i<=n;i++)
        {
            if(a[delnode][i]==1 && visited[i]==0)
            {
                queue[++rear]=i;
                visited[i]=1;
            }


        }
    }
}
int main()
{
    int n,i,j,count=0,visited[10],a[10][10];//number of nodes
    printf("\nEnter the number of nodes :");
    scanf("%d",&n);
    printf("\nRead Adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
        visited[i]=0;
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
           bfs(a,n,visited,i);
           count++;
        }

    }
    if(count==1)
        printf("\nThe graph is connected , %d component",count);
    else
        printf("\nThe graph is not connected , %d component",count);
    return 0;
}
