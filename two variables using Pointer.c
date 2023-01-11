#include<stdio.h>
main() {



	int m;
	int k;
	int *y;
	int *z;
	
	printf("Enter the number : ");
	scanf("%d",&m);
	
	printf("Enter the number : ");
	scanf("%d",&k);
	
	
	y=&k;
	z=&m;
	
	
	printf("%d\n",*y);
	printf("%d\n",*z);
	
} 
