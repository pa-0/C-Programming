/*

    *
   * *
  * * *
 * * * *
n n n n n
 * * * *
  * * *
   * *
    *
    
----1
---1 2
--1 2 3
-1 2 3 4
n n n n n
-1 2 3 4
--1 2 3
---1 2
----1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp, n;
	printf("Enter the Range = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(sp=n-1;sp>=i;sp--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(sp=i;sp<n;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}