#include <stdio.h>
void printmatrix(int a[10][10],int n){ 
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void warshall(int a[10][10], int n)
{
	int k, i, j;
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
			}
		}
	}
}
int main()
{
	int a[10][10], i, j, n;
	printf("Enter the number of vertices: "); 
	scanf("%d", &n);
	printf("Enter the adjacency matrix:\n"); 
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Entered adjacency matrix is:\n"); 
	printmatrix(a,n);
	warshall(a, n);
	printf("Transitive closure:\n"); 
	printmatrix(a,n);
	return 0;
}



