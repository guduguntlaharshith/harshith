#include<stdio.h>
int main()
{
	int a;
	printf("enter month a");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 12:printf("31days");break;
		case 4:
		case 6:
		case 8:
		case 10:printf("30days");break;	
		case 2:printf("28days");break;
		default:printf("not a month");
	}
}
