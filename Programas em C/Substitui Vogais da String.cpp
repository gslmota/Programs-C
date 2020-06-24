#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[50];
	char b='z';
	int i,cont=0;
	printf("Digite uma string: ");
	gets(str);
	for(i=0;i<50;i++)
	{
		if(str[i]=='a')
		{
			cont++;
			str[i]=b;
			
		}
		if(str[i]=='e')
		{
			cont++;
			str[i]=b;
			
		}
		if(str[i]=='i')
		{
			cont++;
			str[i]=b;
			
		}
		if(str[i]=='o')
		{
			cont++;
			str[i]=b;	
			
		}
		if(str[i]=='u')
		{
			cont++;
			str[i]=b;	
			
		}
	}
	printf("%d\n",cont);
	puts(str);
	return 0;
}
	

