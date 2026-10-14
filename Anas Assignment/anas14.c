#include <stdio.h>

	int func();

	int main()
	{
			int x,y;
			x=7;
			y=9;			
			z=func(x,y);
			printf("z %d",x+y);
		}
		
	int func(int a,int b)

	{	int z;
	     z=a+b;
		printf("%d",z);
		return z;
	
}
