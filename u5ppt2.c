#include<stdio.h>

int main()

{
	int  salery,har,da,ta,total;
	
	printf("enter total salery=");
	scanf("%d",& salery);
	
	printf("enter har valur=");
	scanf("%d",&har);
	
	printf("enter da valur=");
	scanf("%d",&da);
	
	printf("enter ta valur=");
	scanf("%d",&ta);
	
	total=salery+har+ta+da;
	
	printf("enter total=%d",total);
	
	return 0;
	
}