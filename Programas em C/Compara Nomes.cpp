#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[100],str2[100];
	int i;
	printf("Digite dois nomes: ");
	gets(str1);
	gets(str2);
	for(i=0;i<100;i++)
	{
		if(str1[i++]==str2[i++])
		{
			printf("Iguais");
			break;
		}
		else
		{
			printf("Diferentes");
			break;
		}
		
	}
	return 0;
}
