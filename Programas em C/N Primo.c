#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int i,n,j,r,d,s,m;
	r=0;
	printf("Digite a quantidade de números primos que deseja imprimir: ");
	scanf("%d",&n);
	for(i=2;i<=(n*4);i++)
	{
		if(i==2)
		{
			printf("\n%d",i);
			printf("\nNúmero primo");
		}
		if(i%2!=0)
		{
			for(j=i;j>0;j--)
			{
				d=i/j;
				if(d==1)
				{
					r=r+1;
				}
				if(d==i)
				{
					r=r+1;
				}
				if(i%j==0)
				{
					r=r+1;
				}
			}
		}
		if(r==2)
		{
			printf("\nEste número é primo");
		}
		else
		{
			printf("\nEste número não é primo");
		}
		r=0;
	}
	return 0;
}
