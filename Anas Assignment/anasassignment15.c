#include <stdio.h>
int main()
{
	char l;
	printf("enter value of character:- ");
	scanf("%c",&l);
	
	if((l=='a') || (l=='e') || (l=='o') || (l=='u') || (l=='i') ||
	(l=='A') || (l=='E') || (l=='O') || (l=='U') || (l=='I') )
	
	{ printf("enter character is vowel");
		//printf("enter value of constant");
	}
	else
	{ printf("enter  character of consonant");
		//printf("enter ch vowel");
		
	}
	return 0;
}
