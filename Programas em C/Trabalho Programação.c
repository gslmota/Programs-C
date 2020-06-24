#include <stdio.h>
#include <stdlib.h>

float soma,maior,menor,mediageral,somatoriogeral;
char nomedaescola[100];

float notafinal[13];

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

typedef struct auxiliar{
	float notafinal[13];
}auxiliar;


float recursivanotas(float a){

int contador;

if(contador==13){

	return notafinal[13];

}else

contador++; //contador

return (notafinal[contador]+recursivanotas(notafinal[contador+1])); //nota final

}



typedef struct sEscolaDeSamba
{
    char nome[100];
    char responsavel[100];
    float nota[13][5],mediageral,somatoriogeral;
    int registrado;
	 //verifica se a estrutura está registrada
}EscolaDeSamba;

int setup = 1,i;
int opcao_menu = 0;

EscolaDeSamba escola[10];

int main(){
do{

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

     printf("\n PROGRAMA DE CONTROLE DO CARNAVAL DE RIO PARANAIBA \n ");

	printf("\n|-------------------- MENU--------------------------|\n");

	printf("[1] - Cadastro de Escola de Samba                  \n");

	printf("[2] - Buscar e Exibir dados de Escola de Samba     \n");

	printf("[3] - Calcular nota final                          \n");

	printf("[4] - Mostrar Escolas de Samba Cadastradas         \n");

	printf("[5] - Mostrar Escolas  Campea e Vice-Campea        \n");

	printf("[6] - Mostrar Escolas Rebaixadas                   \n");

	printf("[7] - Sair do Programa                             \n");

	printf("[8] - Gravar em um arquivo no disco o cadastro das escolas de samba                          \n");

	printf("[9] - Carregar a partir de um arquivo no disco o cadastro das escolas de samba                \n");

	printf("|---------------------------------------------------|");
	printf("\nDigite o  numero correspondente a sua escolha no menu: ");

    scanf("%d",&opcao_menu);


}while(opcao_menu<1 || opcao_menu>9); //do-while forçando interação


if(opcao_menu == 1){
    int escolha;
    int r;
        //registro de uma nova escola!

       for(r = 0; r <1; r ++){

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
            scanf("%s",escola[r].responsavel);

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
}
        printf("\n deseja cadastrar outra escola ou retornar menu? \n");
        printf("\n 1 - cadastrar outra");
        printf("\n 2 - retornar menu");
        scanf("%d",&escolha);

        if(escolha==1){

        	       for(r = 2; r <3; r ++){

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
            scanf("%s",escola[r].responsavel);

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

        main();
}
}else{

if(escolha==2){

main ();

}
}


}else{

     if(opcao_menu == 2){ //buscar e exibir os dados de uma funcao pelo nome
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
}else{
if(opcao_menu == 3){
   printf("\n|---------------------- ATENCAO!--------------------------------|\n");
   printf("| O programa calcula notas finais apenas de escolas cadastradas!|");
   printf("\n| --------------------------------------------------------------|\n");

float nota[5];
float notafinal[13],result,maior,menor;
int i,r,j;


 for(r=0;r<1;r++){ // controle de escola

// atributo 1

for (j = 0; j < 5; j++){
      if(escola[r].nota[1][j] > maior){
          maior = escola[r].nota[1][j];  // pega a maior nota dentro do parâmetro 1
}
    if(escola[r].nota[1][j] < menor){
            menor = escola[r].nota[1][j]; // pega a menor nota dentro do parâmetro 1
}
}

float soma;   // variável de soma

soma = maior + menor;  // soma a maior e a menor nota

notafinal[1]= escola[r].nota[1][1]+escola[r].nota[1][2]+escola[r].nota[1][3]+escola[r].nota[1][4]+escola[r].nota[1][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 2

for (j = 0; j < 5; j++){
if(escola[r].nota[2][j] > maior){
          maior = escola[r].nota[2][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[2][j] < menor){
            menor = escola[r].nota[2][j]; // pega a menor nota dentro do parâmetro 2
}
}

notafinal[2]= escola[r].nota[2][1]+escola[r].nota[2][2]+escola[r].nota[2][3]+escola[r].nota[2][4]+escola[r].nota[2][5]- soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 3

for (j = 0; j < 5; j++){
if(escola[r].nota[3][j] > maior){
          maior = escola[r].nota[3][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[3][j] < menor){
            menor = escola[r].nota[3][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[3]= escola[r].nota[3][1]+escola[r].nota[3][2]+escola[r].nota[3][3]+escola[r].nota[3][4]+escola[r].nota[3][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 4

for (j = 0; j < 5; j++){
if(escola[r].nota[4][j] > maior){
          maior = escola[r].nota[4][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[3][j] < menor){
            menor = escola[r].nota[4][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[4]= escola[r].nota[4][1]+escola[r].nota[4][2]+escola[r].nota[4][3]+escola[r].nota[4][4]+escola[r].nota[4][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 5

for (j = 0; j < 5; j++){
if(escola[r].nota[5][j] > maior){
          maior = escola[r].nota[5][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[3][j] < menor){
            menor = escola[r].nota[5][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[5]= escola[r].nota[5][1]+escola[r].nota[5][2]+escola[r].nota[5][3]+escola[r].nota[5][4]+escola[r].nota[5][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 6

for (j = 0; j < 5; j++){
if(escola[r].nota[6][j] > maior){
          maior = escola[r].nota[6][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[6][j] < menor){
            menor = escola[r].nota[6][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[6]= escola[r].nota[6][1]+escola[r].nota[6][2]+escola[r].nota[6][3]+escola[r].nota[6][4]+escola[r].nota[6][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 7

for (j = 0; j < 5; j++){
if(escola[r].nota[7][j] > maior){
          maior = escola[r].nota[7][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[7][j] < menor){
            menor = escola[r].nota[7][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[7]= escola[r].nota[7][1]+escola[r].nota[7][2]+escola[r].nota[7][3]+escola[r].nota[7][4]+escola[r].nota[7][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 8

for (j = 0; j < 5; j++){
if(escola[r].nota[8][j] > maior){
          maior = escola[r].nota[8][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[8][j] < menor){
            menor = escola[r].nota[8][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[8]= escola[r].nota[8][1]+escola[r].nota[8][2]+escola[r].nota[8][3]+escola[r].nota[8][4]+escola[r].nota[8][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 9

for (j = 0; j < 5; j++){
if(escola[r].nota[9][j] > maior){
          maior = escola[r].nota[9][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[8][j] < menor){
            menor = escola[r].nota[9][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[9]= escola[r].nota[9][1]+escola[r].nota[9][2]+escola[r].nota[9][3]+escola[r].nota[9][4]+escola[r].nota[9][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 10

for (j = 0; j < 5; j++){
if(escola[r].nota[10][j] > maior){
          maior = escola[r].nota[10][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[10][j] < menor){
            menor = escola[r].nota[10][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[10]= escola[r].nota[10][1]+escola[r].nota[10][2]+escola[r].nota[10][3]+escola[r].nota[10][4]+escola[r].nota[10][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 11

for (j = 0; j < 5; j++){
if(escola[r].nota[11][j] > maior){
          maior = escola[r].nota[11][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[11][j] < menor){
            menor = escola[r].nota[11][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[11]= escola[r].nota[11][1]+escola[r].nota[11][2]+escola[r].nota[11][3]+escola[r].nota[11][4]+escola[r].nota[11][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 12

for (j = 0; j < 5; j++){
if(escola[r].nota[12][j] > maior){
          maior = escola[r].nota[12][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[12][j] < menor){
            menor = escola[r].nota[12][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[12]= escola[r].nota[12][1]+escola[r].nota[12][2]+escola[r].nota[12][3]+escola[r].nota[12][4]+escola[r].nota[12][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 13

for (j = 0; j < 5; j++){
if(escola[r].nota[13][j] > maior){
          maior = escola[r].nota[13][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[13][j] < menor){
            menor = escola[r].nota[13][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[13]= escola[r].nota[13][1]+escola[r].nota[13][2]+escola[r].nota[13][3]+escola[r].nota[13][4]+escola[r].nota[13][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

somatoriogeral=0;

for(i=0;i<13;i++){

	somatoriogeral=somatoriogeral+notafinal[i];
}

escola[r].mediageral=somatoriogeral;

printf("media final eh %f",escola[r].mediageral);

}

main();

}else{

if(opcao_menu == 4){//mostra todos os registros
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

}else{

if(opcao_menu == 5){

int r,j;

 for(r=0;r<10;r++){ // controle de escola

// atributo 1

for (j = 0; j < 5; j++){
      if(escola[r].nota[1][j] > maior){
          maior = escola[r].nota[1][j];  // pega a maior nota dentro do parâmetro 1
}
    if(escola[r].nota[1][j] < menor){
            menor = escola[r].nota[1][j]; // pega a menor nota dentro do parâmetro 1
}
}

float soma;   // variável de soma

soma = maior + menor;  // soma a maior e a menor nota

notafinal[1]= escola[r].nota[1][1]+escola[r].nota[1][2]+escola[r].nota[1][3]+escola[r].nota[1][4]+escola[r].nota[1][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 2

for (j = 0; j < 5; j++){
if(escola[r].nota[2][j] > maior){
          maior = escola[r].nota[2][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[2][j] < menor){
            menor = escola[r].nota[2][j]; // pega a menor nota dentro do parâmetro 2
}
}

notafinal[2]= escola[r].nota[2][1]+escola[r].nota[2][2]+escola[r].nota[2][3]+escola[r].nota[2][4]+escola[r].nota[2][5]- soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 3

for (j = 0; j < 5; j++){
if(escola[r].nota[3][j] > maior){
          maior = escola[r].nota[3][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[3][j] < menor){
            menor = escola[r].nota[3][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[3]= escola[r].nota[3][1]+escola[r].nota[3][2]+escola[r].nota[3][3]+escola[r].nota[3][4]+escola[r].nota[3][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 4

for (j = 0; j < 5; j++){
if(escola[r].nota[4][j] > maior){
          maior = escola[r].nota[4][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[3][j] < menor){
            menor = escola[r].nota[4][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[4]= escola[r].nota[4][1]+escola[r].nota[4][2]+escola[r].nota[4][3]+escola[r].nota[4][4]+escola[r].nota[4][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 5

for (j = 0; j < 5; j++){
if(escola[r].nota[5][j] > maior){
          maior = escola[r].nota[5][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[3][j] < menor){
            menor = escola[r].nota[5][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[5]= escola[r].nota[5][1]+escola[r].nota[5][2]+escola[r].nota[5][3]+escola[r].nota[5][4]+escola[r].nota[5][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 6

for (j = 0; j < 5; j++){
if(escola[r].nota[6][j] > maior){
          maior = escola[r].nota[6][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[6][j] < menor){
            menor = escola[r].nota[6][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[6]= escola[r].nota[6][1]+escola[r].nota[6][2]+escola[r].nota[6][3]+escola[r].nota[6][4]+escola[r].nota[6][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 7

for (j = 0; j < 5; j++){
if(escola[r].nota[7][j] > maior){
          maior = escola[r].nota[7][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[7][j] < menor){
            menor = escola[r].nota[7][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[7]= escola[r].nota[7][1]+escola[r].nota[7][2]+escola[r].nota[7][3]+escola[r].nota[7][4]+escola[r].nota[7][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 8

for (j = 0; j < 5; j++){
if(escola[r].nota[8][j] > maior){
          maior = escola[r].nota[8][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[8][j] < menor){
            menor = escola[r].nota[8][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[8]= escola[r].nota[8][1]+escola[r].nota[8][2]+escola[r].nota[8][3]+escola[r].nota[8][4]+escola[r].nota[8][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 9

for (j = 0; j < 5; j++){
if(escola[r].nota[9][j] > maior){
          maior = escola[r].nota[9][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[8][j] < menor){
            menor = escola[r].nota[9][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[9]= escola[r].nota[9][1]+escola[r].nota[9][2]+escola[r].nota[9][3]+escola[r].nota[9][4]+escola[r].nota[9][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 10

for (j = 0; j < 5; j++){
if(escola[r].nota[10][j] > maior){
          maior = escola[r].nota[10][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[10][j] < menor){
            menor = escola[r].nota[10][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[10]= escola[r].nota[10][1]+escola[r].nota[10][2]+escola[r].nota[10][3]+escola[r].nota[10][4]+escola[r].nota[10][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!


//atributo 11

for (j = 0; j < 5; j++){
if(escola[r].nota[11][j] > maior){
          maior = escola[r].nota[11][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[11][j] < menor){
            menor = escola[r].nota[11][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[11]= escola[r].nota[11][1]+escola[r].nota[11][2]+escola[r].nota[11][3]+escola[r].nota[11][4]+escola[r].nota[11][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 12

for (j = 0; j < 5; j++){
if(escola[r].nota[12][j] > maior){
          maior = escola[r].nota[12][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[12][j] < menor){
            menor = escola[r].nota[12][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[12]= escola[r].nota[12][1]+escola[r].nota[12][2]+escola[r].nota[12][3]+escola[r].nota[12][4]+escola[r].nota[12][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

//atributo 13

for (j = 0; j < 5; j++){
if(escola[r].nota[13][j] > maior){
          maior = escola[r].nota[13][j]; // pega a maior nota dentro do parâmetro 2
}
if(escola[r].nota[13][j] < menor){
            menor = escola[r].nota[13][j]; // pega a menor nota dentro do parâmetro 2
}
}


notafinal[13]= escola[r].nota[13][1]+escola[r].nota[13][2]+escola[r].nota[13][3]+escola[r].nota[13][4]+escola[r].nota[13][5]-soma/3;

// a nota final de um atributo é a soma de todas notas do mesmo atributo subtraida da maior e da menor e dividida por 3!

escola[r].somatoriogeral=0;

for(i=0;i<13;i++){

	escola[r].somatoriogeral=escola[r].somatoriogeral+notafinal[i];
}

escola[r].mediageral=escola[r].mediageral;

}

float campea,vice;

for (r = 0; r < 10; r++){

if(escola[r].mediageral > campea){

campea = escola[r].mediageral;



}else{


if(escola[r].mediageral =! campea && escola[r].mediageral>vice ){

vice = escola[r].mediageral;



}

}

}

printf("\n a campea teve a nota media geral de  %f ",campea);

printf("\n a vice campea teve a nota media geral de %f ",vice);




}
    if(opcao_menu == 6)
    {



    }
    if(opcao_menu == 7){

    printf("\n Programa Encerrado com Sucesso! \n ");

     return 0;

}else{

if(opcao_menu == 8){

    	int fechar,i,result,h,j;

FILE *ponteiro;

ponteiro=fopen("nome das escolas.txt","w"); // abriu arquivo

if(ponteiro==NULL){
	printf("erro na abertura!");
	exit(1);
}else

printf("\n Arquivo Abriu e Salvou um arquivo no seu diretorio onde esta o Programa uma copia do cadastro das escolas de samba! \n ");


result = tamanho_string(nomedaescola);

for(i = 0;i<result;i++){

fputc(nomedaescola[i],ponteiro);

}

fechar=fclose(ponteiro);	 // fecha arquivo

main ();

}



		}
}

}
}
}
}



