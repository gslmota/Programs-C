#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int n1,n2,i,t=0,j;
	printf("Digite 2 números: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		t=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				t++;
			}	
		}
		if(t==2)
		{
			printf("\n%d",i);
			printf("\nEste número é primo");
			
		}
	}
	
	return 0;
}

