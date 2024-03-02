#include<stdio.h>

int main()

{
	int x,y,z;
	
	printf("enter value x=");
	scanf("%d",&x);
	
	printf("enter value y=");
	scanf("%d",&y);
	
	z=180-(x+y);
	
	printf("enter value 180-x+y=%d",z);
	
	return 0;
}