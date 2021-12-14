#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	switch(a%2)
	{
		case 1:printf("odd number");break;
		case 2:printf("even number");break;
		default:printf("not detected");
	}
}
