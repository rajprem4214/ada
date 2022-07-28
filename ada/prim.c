#include <stdio.h>
int n,c[20][20],i,j,visited[20];
void main()
{
printf("Enter number of vertices \n");
scanf("%d",&n);
printf("Enter the cost matrix \n");
printf("Enter 999 if no direct edges \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
scanf("%d",&c[i][j]);
visited[i]=0;
}
prim();
}
void prim()
{
int min,b,a,k,count=0,cost=0;
min=999;
visited[1]=1; /* 1st vertex is visited */
while(count<n-1)
{
min=999;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(visited[i] && !visited[j] && min>c[i][j]) /* if i is visited but j is not
visited and c[i][j] < min*/
{
min=c[i][j]; /* assign c[i][j] as minimum cost*/
a=i;
b=j;
}
printf("%d--->%d = %d\n",a,b,c[a][b]); /* prints each edge in the MST and its cost */
cost+=c[a][b]; /* adds the minimum cost */
visited[b]=1;
count++;
} //end while
printf("Total cost of Spanning tree is %d",cost); /* cost holds the minimum cost of the MST */
}


//  O ( v 2 )

// 0 1 3 999
// 1 0 1 10
// 3 1 0 4
// 999 10 4 0
// 1--->2 = 1
// 2--->3 = 1
// 3--->4 = 4
// Total cost of Spanning tree is 6