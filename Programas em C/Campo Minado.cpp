//Este trabalho � o jogo do campo minado
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<time.h>//para mudar a seed da fun��o rand() 
int aleatoriedade()//Fun��o para colocar as bombas
{
	int i;
	int vet[15];
	for(i=0;i<15;i++)
	{
		vet[i]=rand() % 81;
		return vet[i];
	}
}
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int tabuleiro[9][9]; // cria  tabuleiro de jogo
	int m; //coleta a op��o de menu escolhida pelo usu�rio
	int i,j; //vari�veis  criadas para que se possa trabalhar com a matriz na op��o 1
	int v; // vai receber um n�mero aleat�rio
	int vet[15];//Vetor para armazenar os valores de aleatoriedade
	int contador=0,n;//Cria um contador e uma vari�vel para colocar os n�meros aleat�rios na matriz
	int l,c;//Cria vari�veis para armazenar os valores das jogadas
	char op;//Armazena a op��o de bandeira
	int contadorbandeira=0;//Cria um contador para as bandeiras
	
	printf("\n----------------------------");// cria o menu 
	printf("\n|       CAMPO MINADO       |");
	printf("\n----------------------------");
	printf("\n|          MENU            |");
	printf("\n| 1- Novo Jogo             |");
	printf("\n| 2-Personalizar Tabuleiro |");
	printf("\n| 3-Recordes               |");
	printf("\n| 4-Sair                   |");
	printf("\n----------------------------");
	printf("\nDigite o que deseja fazer: ");
	scanf("%d",&m); //coleta do usu�rio a op��o escolhida do menu
	switch(m)
	{
		case 1:
				printf("\n----------------------------");
				printf("\n|       CAMPO MINADO       |");
				printf("\n----------------------------");
				printf("\n   1 2 3 4 5 6 7 8 9\n");
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						tabuleiro[i][j]='-';
					}
				}
					for(i=0;i<9;i++)
					{
				
						printf("\n");
						printf("%d  ",i+1);
						for(j=0;j<9;j++)
						{
							printf("%c ",tabuleiro[i][j]);	
						}	
					}
				srand(time(NULL));//Gera as posi��es das bombas
				for(int i=0;i<15;i++)
				{
					vet[i]=rand() % 81;
					if(vet[i]==vet[i-1])
					{
						vet[i]=rand() % 81;
					}
				}
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						contador++;
						for(n=0;n<=10;n++)
						{
							if(vet[n]==contador)
							{
								tabuleiro[i][j]='*';//Atribui as bomabas para o tabuleiro
							}
						}
					}
				}
				for(i=0;i<9;i++)
				{
				
					printf("\n");
					printf("%d  ",i+1);
						for(j=0;j<9;j++)
						{
							printf("%c ",tabuleiro[i][j]);	
						}	
				}
				printf("\nDigite a posi��o em que deseja fazer a jogada (linha/coluna): ");
				scanf("%d",&l);
				scanf("%d",&c);
				printf("\nDeseja colocar uma bandeira nessa posi��o? Se sim digite s se n�o digite n:");
				fflush(stdin);
				scanf("%c",&op);
				if(op=='s')
				{
					tabuleiro[l][c]=='b';
					contadorbandeira++;
				}
				else
				{
					if(tabuleiro[l][c]=='*')
					{
						for(i=0;i<9;i++)
						{
				
							printf("\n");
							printf("%d  ",i+1);
							for(j=0;j<9;j++)
							{
								printf("%c ",tabuleiro[i][j]);	
							}	
						}
						printf("Fim de Jogo");
						main();
					}
					else
					{
						for(i=l-1;i<=l+1;i++)
						{
							for(j=c-1;j<=j+1;j++)
							{
								if(tabuleiro[l][c]!='*')
								{
									
								}
							}
						}
						
					}
				}
				 
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
		printf("Digite uma op��o v�lida no menu!");
		main();
	}
	
	
	
	
}
