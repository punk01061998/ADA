#include <stdio.h> 
int count=0,x[5]; 
int main()
{
	int n;
	printf("\n enter the number of queen"); 
	scanf("%d",&n);
	nqueen(1,n); 
	if(count==0)
		printf("\n no solution found");
	else
		printf("\n number of solution found is:%d",count);
	return 0;
}
int place(int k,int i)
{
int j; 

for(j=1;j<k;j++)
{
	printf("x[%d]=%d ",j,x[i]);
	if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
	return 0;
}
return 1;
}
nqueen(int k,int n)
{
	int i,j,p; 
	for(i=1;i<=n;i++)
	{
		if(place(k,i))
		{
			x[k]=i; 
			if(k==n)
			{
				count++; 
				printf("solution=%d",count); 
				printf("\n"); 
				for(j=1;j<=n;j++)
				{
					for(p=1;p<=n;p++)
						if(x[j]==p)
							printf("$\t");
						else
							printf("0\t");
						printf("\n");
				}
				printf("\n");
			}
			else nqueen(k+1,n);
		}
	}
	return 0;
}

