#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr;
	int n,i;
	clrscr();
	printf("enter no. of element");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));

	if(ptr==NULL)
	{
		printf("memory not allocated .\n");
		exit(0);
	}
	else
	{
		printf("memory sucessfuly allocated using malloc .\n");
		for(i=0; i<n; i++)
		{
			ptr[i]=i+1;
		}
		printf("the element of the array are;");
		for(i=0; i<n; i++)
		{
			ptr[i]=i+1;
		}
		printf("the element of the array are:");
		{
			for(i=0; i<n; i++)
			printf("%d",ptr[i]);
		}
	}
	getch();
}