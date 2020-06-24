#include<stdio.h>
int main()
{
	int idade;
	char sexo[50];
	char nome[50];
	puts("Digite seu nome:");
	gets(nome);
	puts("Digite seu sexo:");
	gets(sexo);
	fflush(stdin);
    puts("Digite sua idade:");
    scanf("%s", &idade);
    fflush(stdin);
    if(sexo[0]=='f'||sexo[0]=='F')
	{	
		if(idade<25)
		{
			puts(nome);
			printf("Aceita");
		}
	}
	else
	{
		printf("Nao aceita");
	}
	return 0;
}
