#include<stdio.h>
void  preencheVetor(float vet[])
{
int i;
for(i = 0; i < 5; i++)
{
printf("Digite a nota : ");
scanf("%f", &vet[i]);
}
}
void imprimevetor(float vet[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%f");
	}
}
int main()
{
float notas[5];
preencheVetor(notas);

for(int i=0;i<5;i++)
{
	printf("\n%f",notas[i]);
}
return 0;
}
