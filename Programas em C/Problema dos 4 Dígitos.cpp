#include<stdio.h>
#include<locale.h>
int main ()
	{
		int n,m,c,d,u;
			setlocale (LC_ALL, "Portuguese");
			printf("Digite um n�mero de 4 d�gitos: ");
			scanf("%d",&n);
			m=(n/1000)*1000;
			c=((n/100)*100)-m;
			d=((n/10)*10)-m-c;
			u=n-m-c-d;
			printf("O primeiro d�gito foi: %d\n",m/1000);
			printf("O segundo d�gito foi: %d\n",c/100);
			printf("O terceiro d�gito foi: %d\n",d/10);
			printf("O quarto d�gito foi: %d\n",u);
		return 0;
	}
