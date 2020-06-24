// Gabriel Savio de Lima Mota         6319
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,jog=0,n,pc,s;
	int pali=21;
	printf("Este e o jogo dos 21 palitos!\n");
	for(i=0;i<pali;i++)
	{
		printf("| ");
	}
	for(jog=0;jog<4;jog++)
    {


        printf("\n--------TURNO %d --------\n",jog+1);
        do{
        printf("\nVoce pode retirar no minimo 1 palito e no maximo 4 palitos.\n");
        printf("Digite a quantidade de palitos que voce deseja retirar:  \n");
        scanf("%d",&n);}while(n >= 5 || n <= 0);
        printf("\nVoce retirou %d palitos\n",n);
        pali=pali-n;
        printf("\n");
        for(i=0;i<pali;i++)
        {
            printf("| ");
        }
        pc=5-n;
        printf("\nO computador retirou %d palitos\n",pc);
        pali=pali-pc;
        printf("\n");
         for(i=0;i<pali;i++)
        {
            printf("| ");
        }
        printf("\n\n");
        printf("\nRestam esses palitos: ");
        for(i=0;i<pali;i++)
        {
            printf("| ");
        }
        printf("\n");
        while(pali==1)
        {
            do{
            printf("\nDigite a quantidade de palitos que voce deseja retirar:  \n");
            scanf("%d",&s);}while(s <1 || s >1);
            printf("\nO computador venceu!:(\n");
           break;

        }
    }
system("pause");
return 0;
}
