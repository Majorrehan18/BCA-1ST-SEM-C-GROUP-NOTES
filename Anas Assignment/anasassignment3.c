#include <stdio.h>
int main()
{
	int k,l,m;
	printf("enter value of k");
	scanf("%d",& k);
	printf("enter value of l");
	scanf("%d",& l);
	m = l;
	l = k;
	k = m;
	printf("value of k = %d\n, value of l = %d\n" ,k,l);
	
	return 0;
}
