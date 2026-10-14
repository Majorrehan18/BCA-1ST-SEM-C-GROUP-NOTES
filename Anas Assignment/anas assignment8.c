#include <stdio.h>
int main()
{
	int r;
	printf("assigned marks");
	scanf("%d",&r);
	
	if (r<=59 && r>=0)
	{ printf(" you got a f");}
	if (r<=69&& r>=60)
	{ printf ("you got a d");}
	if (r<=79&& r>=70)
	{ printf("you got a c");}
	if (r<=89 && r>=80)
	{ printf("you got a b");}
	if (r<=100 && r>=90)
	{ printf("you got a a");}
	
	return 0;
}	
