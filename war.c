#include <stdio.h>
#include <string.h>

//Definição de regras
#define MAX_TERRITORIOS 5
#define MAX_STRINGS 100

//Definição da struct
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};


// Função para limpar o buffer
void LimparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Estruturs principal
int main() {
    struct Territorio mundo[MAX_TERRITORIOS];//

    //Loop para cadastro de territórios
  for (int totalTerritorios = 0; totalTerritorios < MAX_TERRITORIOS; totalTerritorios++) {

        printf("*---------------------*\n\n");
        printf("Cadastre um novo território.\n\n");


        printf("Nome do Território:");//Cadastro do nome do território
        fgets(mundo[totalTerritorios].nome, sizeof(mundo[totalTerritorios].nome), stdin);//Função sizeof utilizada para leitura exata dos bytes da string evitando overflow
        mundo[totalTerritorios].nome[strcspn(mundo[totalTerritorios].nome, "\n")] ='\0';

        printf("Cor de seu exercito:");//Cadastro da cor
        fgets(mundo[totalTerritorios].cor, sizeof(mundo[totalTerritorios].cor), stdin);//Entrada de dados
        mundo[totalTerritorios].cor[strcspn(mundo[totalTerritorios].cor, "\n")] = '\0';

        printf("Total de tropas:");//Cadastro da quantidade de tropas
        scanf("%d", &mundo[totalTerritorios].tropas);//Utilizado o scanf já que o fgets não pode ser utilizado com o tipo int
        getchar();//Limpeza do buffer
        
        printf("\n");//
    } 

    printf("\n*----------------------*\n\n");
    for(int totalTerritorios = 0; totalTerritorios < MAX_TERRITORIOS; totalTerritorios++) {//Loop para exibir todos os 5 territorios
         printf("Território %d: %s, Cor: %s, Tropas: %d\n",//Exibição de territórios
             totalTerritorios + 1, mundo[totalTerritorios].nome, mundo[totalTerritorios].cor, mundo[totalTerritorios].tropas);
       }

    return 0;
}


