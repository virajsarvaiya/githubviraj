#include<stdio.h>
#include<conio.h>
void main()
{
	char arr[3][2],i,j;
	clrscr();
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("enter value for arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("\n value for arr[%d][%d]:is %d",i,j,arr[i][j]);
		}
	}
	getch();
}