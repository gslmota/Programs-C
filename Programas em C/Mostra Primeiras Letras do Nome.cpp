#include<stdio.h>
int main()
{
	char nome[100];
	int i,cont=0,c;
	printf("Digite o nome completo: ");
	gets(nome);
	puts(nome);
	for(i=0;i<50;i++)
	{
		cont++;
		if(nome[i]=='\0')
		{
			break;
		}
	}
	c=cont;
	printf("%c",nome[0]);
	for(i=0;i<c;i++)
	{
		if(nome[i]==' ')
		{
			printf(" %c",nome[i+1]);
		}	
	}
	
	return 0;
}
