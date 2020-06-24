#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int aleatoriedade()
{
	int i;
	int vet[15];
	for(i=0;i<15;i++)
	{
		vet[i]=rand() % 81;
		return vet[i];
	}
}
int main()
{		
	srand(time(NULL));
	int vet[15];
	int x;
	for(int i=0;i<15;i++)
	{
		vet[i]=rand() % 81;
		if(vet[i]==vet[i-1])
		{
			vet[i]=rand() % 81;
		}
	}
	for(int i=0;i<15;i++)
	{
		printf("\n%d",vet[i]);
	}
	return 0;
}
