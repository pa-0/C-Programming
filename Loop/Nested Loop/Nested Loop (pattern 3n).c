/*

n . . . 4 3 2 1
. . . 4 3 2 1
. . 4 3 2 1
. 4 3 2 1
4 3 2 1
3 2 1
2 1
1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}