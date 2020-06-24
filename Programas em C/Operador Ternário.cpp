#include<stdio.h>
int main()
{
	int n1,n2,maior;
	printf("Digite dois numeros: ");
	scanf("%d %d",&n1,&n2);
	maior=(n1>n2)?n1:n2;
	printf("O maior e: %d",maior);
	return 0;
}
