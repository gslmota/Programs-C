#include<stdio.h>
int main()
{
	char nome[50];
	int idade;
	char sexo;
	printf("Digite o seu nome,sua idade,sexo: ");
	gets(nome);
	fflush(stdin);
	scanf("%d",&idade);
	fflush(stdin);
	scanf("%c",&sexo);
	if(sexo=='f')
	{
		if(idade<25)
		{
			puts(nome);
			printf("Pessoa Aceita");
		}	
	}	
	else
	{
		printf("Pessoa nao aceita");
	}	
	return 0;
}
