#include <stdio.h>
int main()
{
	int a;
	float c,f;
	printf("press 1 for c to f\n, press 2 for f to c");
	scanf("%d",&a);
	
	if(a==1)
	{ printf("celcius");
		scanf("%f",&c);
		f=(c*1.8)+32;
		printf("%f degree celcius is %f in fahrenhit",c ,f);
	}
	
	
    if(a==2)
	{ printf("fahrenhit");
	scanf("%f",&f);
	c=(f-32)*(0.55555);
	printf("%f degree fahrenhit is %f in celsius",f,c);
	}
	
   return 0;
}

