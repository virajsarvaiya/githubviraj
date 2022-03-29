#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[3][3],i,j;
	clrscr();
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("enter value for arr[%d][%d]:",i,j);
			scanf("%d",arr[i][j]);
		}
	}
	for(i=1; i<=3; i++)
	{
		for(j=0; j<3; j++)
		{
		printf("\n value for arr[%d][%d]:",i,j);
		scanf("%d",arr[i][j]);
		}
	}
	for(i=1; i<=3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n value for arr[%d][%d]: is %d",i,j,arr[i][j]);
		}
	}
	getch();
}