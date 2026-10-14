#include <stdio.h>
int main()
{
	int l,b,a,p;
	printf("enter the breadth");
	scanf("%d",&b);
	printf("enter the length");
	scanf("%d",&l);
	a = l*b;
	p = 2*(l+b);
	printf("area = %d perimeter = %d",a,p);
	return 0;
}
	

