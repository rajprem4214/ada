#include <stdio.h>
void floyd (int a[20][20], int n)
{
int k,i,j;
for(k=0;k<n;k++)
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[i][j] > (a[i][k] + a[k][j]))
a[i][j] = (a[i][k] + a[k][j]);
printf(" All Pairs Shortest Paths:\n");
for(i=0;i<n;i++)
{
for (j=0;j<n;j++)
printf("%d\t" , a[i][j]);
printf("\n");
}
}
void main()
{
int n,a[20][20],i, j ;
printf("Enter the number of vertices\n");
scanf("%d", &n);
printf("Enter the cost adjacency matrix for the graph [999 for no edge, 0 for self loops]: \n");
for (i=0;i<n;i++)
for (j=0;j<n;j++)
scanf("%d", &a[i][j]);
floyd(a,n);
}

// T>,c - o(n^3)
// Enter the number of vertices
// 4
// Enter the cost adjacency matrix for the graph [999 for no edge, 0 for self loops]: 
// 0 1 3 999
// 1 0 1 10
// 3 1 0 4
// 999 10 4 0
//  All Pairs Shortest Paths:
// 0       1       2       6
// 1       0       1       5
// 2       1       0       4
// 6       5       4       0