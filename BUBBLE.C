#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,k,l,n,temp;
	clrscr();
	printf("enter array number=");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter no.=a[%d]",i);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			temp=a[i][j];
			l=j+1;
			for(k=i; k<n; k++)
			{
				while(l<n)
				{
					if(temp>a[k][i])
					{
						temp=a[k][l];
						a[k][l]=a[i][j];
						a[i][j]=temp;
						}
					l++;
					}
				l=0;
				}
			}
		}
	printf("\n__after ascending order__\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	getch();
}

