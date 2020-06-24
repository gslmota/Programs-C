#include<stdio.h>
#include<stdlib.h>
typedef struct saluno
{
	char nome[30];
	int idade[10];
	float nota[20];
}aluno;
int main()
{
	aluno a;
	int i;
	printf("digite o nome , idade, matricula");
	for(i=0;i<3;i++)
	{
	gets(a.nome);
	scanf("%d",&a.idade[i]);
	scanf("%f",&a.nota[i]);
	}
	printf("%d",a.idade[0]);
	return 0;
}
