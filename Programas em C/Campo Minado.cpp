//Este trabalho é o jogo do campo minado
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<time.h>//para mudar a seed da função rand() 
int aleatoriedade()//Função para colocar as bombas
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
	int m; //coleta a opção de menu escolhida pelo usuário
	int i,j; //variáveis  criadas para que se possa trabalhar com a matriz na opção 1
	int v; // vai receber um número aleatório
	int vet[15];//Vetor para armazenar os valores de aleatoriedade
	int contador=0,n;//Cria um contador e uma variável para colocar os números aleatórios na matriz
	int l,c;//Cria variáveis para armazenar os valores das jogadas
	char op;//Armazena a opção de bandeira
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
	scanf("%d",&m); //coleta do usuário a opção escolhida do menu
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
				srand(time(NULL));//Gera as posições das bombas
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
				printf("\nDigite a posição em que deseja fazer a jogada (linha/coluna): ");
				scanf("%d",&l);
				scanf("%d",&c);
				printf("\nDeseja colocar uma bandeira nessa posição? Se sim digite s se não digite n:");
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
		printf("Digite uma opção válida no menu!");
		main();
	}
	
	
	
	
}
