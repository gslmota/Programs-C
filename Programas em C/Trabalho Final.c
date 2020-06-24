//rodrigo jeremias 6315/gabriel savio 6319/pedro jardim 6314
#include <stdio.h>
#include <stdlib.h>
int tamanho_string(char string[100]){

    int i = 0;
    int contador = 0;
    for(i = 0; i < 100; i++){
        if(string[i] != '\0'){
        contador = contador + 1;}
        else{i = 100;}
    }
    return contador;
}
typedef struct sEscolaDeSamba
{
    char nome[100];
    char responsavel[100];
    float nota[13][5];
    int registrado; //verifica se a estrutura está registrada
}EscolaDeSamba;

int setup = 1,i;
int opcao_menu = 0;
EscolaDeSamba escola[10];
int main()
{
    if(setup == 1)
    {
        //execucao do setup,devera ser executado 1 unica vez
        int r = 0;
        for (r = 0; r < 10; r++)
        {
            escola[r].registrado = 0;

        }
    setup = 0;
    }
    //aqui la e codigo normal

     printf("\n PROGRAMA DE CONTROLE DO CARNAVAL DE RIO PARANAIBA \n ");

	printf("\n|-------------------- MENU--------------------------|\n");

	printf("|[1] - Cadastro de Escola de Samba                  |\n");

	printf("|[2] - Buscar e Exibir dados de Escola de Samba     |\n");

	printf("|[3] - Calcular nota final                          |\n");

	printf("|[4] - Mostrar Escolas de Samba Cadastradas         |\n");

	printf("|[5] - Mostrar Escolas  Campea e Vice-Campea        |\n");

	printf("|[6] - Mostrar Escolas Rebaixadas                   |\n");

	printf("|[7] - Sair do Programa                             |\n");
	printf("|---------------------------------------------------|");
	printf("\nDigite o  numero correspondente a sua escolha no menu: ");

    scanf("%d",&opcao_menu);

    if(opcao_menu == 1)
    {




        int r=0;
        //registro de uma nova escola
       for(r = 0; r < 20; r ++)
    {

        if (escola[r].registrado == 0)
        {
            printf("\nDigite o nome da escola junto!Nao utilize espaco!\n");
            printf("\nEscreva o nome da escola e pressione ENTER:\n");
            scanf("%s",&escola[r].nome);
                if(tamanho_string(escola[r].nome) < 7){
                   printf("tamaho invalido");
                    system("cls");
                    main();
                   }
            fflush(stdin);
            printf("\nEscreva o nome do responsavel pela nova escola e pressione ENTER:\n");
            scanf("%s",&escola[r].responsavel);
             printf("\n ------- Cadastro de Sistemas de Notas --------------- \n");   // sistemas de notas

               printf("\n ATENCAO!!!!! \n");

               printf("\n SIGA AS REGRAS PARA O CADASTRO \n");

               printf("\n Sao 13 quesitos a serem julgados. As Notas sao de 7 a 10. e julgadas por 5 jurados. \n");

               printf("\n|----------Quesitos julgados---------|\n");

               printf("| 1---------------------------BATERIA|\n");
               printf("| 2----------------------SAMBA ENREDO|\n");

               printf("| 3--------------------------HARMONIA|\n");

               printf("| 4--------------------------EVOLUCAO|\n");

               printf("| 5----------------------------ENREDO|\n");

               printf("| 6--------------------------CONJUNTO|\n");

               printf("| 7--------------ALEGORIAS E ADERECOS|\n");

               printf("| 8-------------------------FANTASIAS|\n");

               printf("| 9----------------COMISSAO DE FRENTE|\n");

               printf("| 10-----MESTRE-SALA E PORTA-BANDEIRA|\n");

               printf("| 11-------------------------EXECUCAO|\n");

               printf("| 12-----------------TEMPO DE DESFILE|\n");

               printf("| 13-------------------------INOVACAO|");
               printf("\n|------------------------------------|");
		       printf(" \n Digite as notas  na ordem dos quesitos! \n");
            int i, j;



            for(i = 0; i < 13; i++)
        {
                for(j = 0; j < 5; j++)
                {
                do{

                    printf("Quesito %d nota do jurado %d\n",(i + 1),(j + 1));
                    scanf("%f",&escola[r].nota[i][j]);

                        }while(escola[r].nota[i][j]<7 || escola[r].nota[i][j]>10);  // DOWHILE PARA LIMITAR NOTA DE 7 A 10!
                }
        }


            escola[r].registrado = 1;
            r=19;
            system("cls");
            main();
       }
      }
    }


    if(opcao_menu == 2)
    { //buscar e exibir os dados de uma funcao pelo nome
            int i, j, h;
             printf("\n| ---------------------- ATENCAO!---------------------- |\n");

             printf("|O programa busca apenas escolas cadastradas!           |");

             printf("\n| ------------------------------------------------------|");
             printf("\n Digite  o nome da  escola procurada: ");


            for(h=0;h<10;h++)
            {
              for(j = 0;i<13;j++)
                {
                  for(i = 0;i<5;i++)
                 {
                        printf("nome da escola: %s",escola[h].nome);
                        printf("nome do responsavel: %s", escola[h].responsavel);
                        for(i = 0; i < 13; i ++ )
                    {
                        for(j = 0; j < 5; j ++ )
                        {
                         printf(" %0.2f ",escola[h].nota[i][j]);
                        }

                   }

                }
             }
    }
    if(opcao_menu == 3)
    {
         printf("\n|---------------------- ATENCAO!--------------------------------|\n");
         printf("| O programa calcula notas finais apenas de escolas cadastradas!|");
         printf("\n| --------------------------------------------------------------|\n");
    float media (float nota[5]){
    float maior = 0;
    float menor = 10;
    int i;
    for (i = 0; i < 5; i++){
        if(nota[i] > maior){
            maior = nota[i];
        }
        if(nota[i] < menor){
            menor = nota[i];
        }

    }
    float soma;
    soma = maior + menor;
    float media = 0;
    for (i = 0; i < 5; i++){
        media = media + nota[i];
    }

    return ((media - soma)/3);

}

    }
    if(opcao_menu == 4)
    {//mostra todos os registros
    int i;
    for(i = 0; i < 10; i ++ )
    {
        if (escola[i].registrado == 1)
        {
            printf("%s\n",escola[i].nome);
        }
        else if (escola[i].registrado == 0)
        {
            printf("a escola %d ainda não foi registrada\n",(i + 1));
        }
    }
    int h,j;
    for(h = 0; h < 10; h ++ )
    {
        if(escola[h].registrado == 1)
        {
        printf("%s\n",escola[h].nome);
        for(i = 0; i < 13; i ++ )
        {
            for(j = 0; j < 5; j ++ )
            {
                printf(" %f ",escola[h].nota[i][j]);
            }
            printf("\n");
        }
     }
    }
 main();



    }
    if(opcao_menu == 5)
    {

    }
    if(opcao_menu == 6)
    {



    }
    if(opcao_menu == 7)
    {
    printf("\n Programa Encerrado com Sucesso! \n ");
     return 0;
    }


        }
}
