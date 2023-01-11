#include<stdio.h>
main() {



	int a;
	int b;
	int *c;
	
	printf("Enter the number : ");
	scanf("%d",&a);
	
	b=a*a;
	c=&b;
	
	printf("%d\n",*c);
	
}
