#include<stdio.h>
#include<stdlib.h>
int main()
{
    int tvet;
    int *pv;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tvet);
    pv=(int *) malloc(tvet*sizeof(int));
    if(pv==NULL)
    {
        printf("Erro");
        exit(1);
    }
    for(int i=0;i<tvet;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&pv[i]);
    }
    for(int i=0;i<tvet;i++)
    {
        printf("%d ",pv[i]);
    }
    free(pv);
    return 0;
}
