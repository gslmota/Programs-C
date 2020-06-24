#include<stdio.h>
#include<stdlib.h>
int soma( int x, int c)
{
    if(x==c)
    {
        return x;
    }
    return x+soma(x+1,c);
}
int main()
{
    int a,b;
    printf("Digite dois numeros: ");
    scanf("%d",&a);
    fflush(stdin);
    scanf("%d",&b);
    printf("A soma das valores de %d ate %d e: %d",a,b,soma(a,b));
    return 0;
}
