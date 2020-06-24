#include<stdio.h>
#include<locale.h>
typedef struct sregitro
{
	char nome[50];
	int matricula;
	int n1,n2,n3,i;
}registro;
int main()
{
	setlocale(LC_ALL,"portuguese");
	registro a[5];
	int i;
	int maior=0,c=0,d=0;
	int med=0,m=0,n=100,h=0;
	for(i=0;i<5;i++)
	{
		printf("\nDigite o nome do aluno %d: ",i+1);
		fflush(stdin);
		gets(a[i].nome);
		printf("\nDigite a matrícula do aluno %d: ",i+1);
		scanf("%d",&a[i].matricula);
		printf("\nDigite a nota da primera prova: ");
		scanf("%d",&a[i].n1);
		printf("\nDigite a nota da segunda prova: ");
		scanf("%d",&a[i].n2);
		printf("\nDigite a nota da terceira prova:  ");
		scanf("%d",&a[i].n3);
	}
	for(i=0;i<5;i++)
	{
		if(a[i].n1>maior)
		{
			maior=a[i].n1;
			c=i;
		}	
	}
	printf("\nO aluno com a maior nota é: %s",a[c].nome);
	for(i=0;i<5;i++)
	{
		med=((a[i].n1)+(a[i].n2)+(a[i].n3))/3;
		if(m<med)
		{
			m=med;
			d=i;
		}
		if(n>med)
		{
			n=med;
			h=i;
		}
		if(med>6)
		{
			printf(" Aluno %d :Aprovado",i+1);
		}
	}
	printf("O aluno com maior nota na 1 prova e: %s",a[c].nome);
	printf("O aluno com maior media geral e: %s",a[d].nome);
	printf("O aluno com a menor media geral e: %s",a[h].nome);
	return 0;
}
