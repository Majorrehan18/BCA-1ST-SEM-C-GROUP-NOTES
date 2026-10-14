#include <stdio.h>
int main()
{
	int r;
	float a,c;
	printf("enter value of radius");
	scanf("%d",&r);
	a=(3.14)*r*r;
	c=2*(3.14*r);	
	printf ("value of area\n%f,value of curcumference\n%f",a,c);
	return 0;
	} 
