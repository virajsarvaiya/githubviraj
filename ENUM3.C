#include<stdio.h>
#include<conio.h>
enum color
{
	pink;
	white;
	orange;
	black;
	red;
	blue;
	green;
};
int main()
{
	int i;
	clrscr();
	for(i=orange; i<green; i++)
	{
		printf("%d",i);
	}
	return 0;
}