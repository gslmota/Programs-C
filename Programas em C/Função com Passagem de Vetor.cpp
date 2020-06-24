#include<stdio.h>
void alteravetor(int vet[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Digite um numero: ");
		scanf("%d",&vet[i]);
	}	
}
int main()
{
	int vetor[5];
	alteravetor(vetor);
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",vetor[i]);		
	}
	
	
	
	
	return 0;
}
