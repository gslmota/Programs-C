#include<stdio.h>
#include<stdlib.h>
int fibonacci (int n) 
{
if (n <= 1)
{
 //caso base
return n;
}
return (fibonacci(n-2) + fibonacci(n-1));
//passo da recursão
}
int main()
{
    int a,b;
    printf("Digite um numero: ");
    scanf("%d",&a);
    b=fibonacci(a);
    printf("O numero correspondente ao valor de %d  em fibonacci e: %d",a,b);
    return 0;
}
