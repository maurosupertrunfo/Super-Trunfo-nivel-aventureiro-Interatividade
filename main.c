/* 
Nível Aventureiro
Desafio: nível aventureiro
Interatividade no Super Trunfo
*/

#include <stdio.h>

int main() {

    //Variaveis para guardar dados da PRIMEIRA carta

    char pais[20];
    int populacao;
    float area;
    float pib; 
    int numero_de_pontos_turisticos;
    float densidade_demografica;


    //Idem para a SEGUNDA carta

    char pais1[20];
    int populacao1;
    float area1;
    float pib1; 
    int numero_de_pontos_turisticos1;
    float densidade_demografica1;


    // Entrada de dados do usuario


    /* Entrada da PRIMEIRA carta   */
    printf("Por favor, entre com os dados da primeira carta.\n");

    printf("Entre com o nome do Pais, por exemplo, Brasil ou Argentina.\n <<< ");
    scanf("%s", pais);
    printf("\n");

    printf("Entre com a populacao, por exemplo, 2000000 de pessoas.\n <<< ");
    scanf("%d", &populacao );
    printf("\n");

    printf("Area por exemplo 2000000 kilometros quadrados.\n <<< ");
    scanf("%f", &area);
    printf("\n");

    printf("Entre com o PIB do pais, por exemplo 2000000.\n <<< ");
    scanf("%f", &pib);
    printf("\n");

    printf("Numero de pontos turisticos, por exemplo, 10 lugares.\n <<< ");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("\n");

    densidade_demografica = populacao/area ;   //caulculando  densidade_demografica

    printf("Entao, temos a densidade_demográfica. %f\n",populacao/area);
    printf("\n");


   /* Entrada da SEGUNDA carta   */

    printf("Por favor, entre com os dados da SEGUNDA carta.\n");

    printf("Entre com o nome do Pais, por exemplo, Brasil ou Argentina.\n <<< ");
    scanf("%s", pais1);
    printf("\n");

    printf("Entre com a populacao, por exemplo, 2000000 de pessoas.\n <<< ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Area por exemplo 2000000 kilometros quadrados.\n <<< ");
    scanf("%f", &area1);
    printf("\n");

    printf("Entre com o PIB do pais, por exemplo 2000000.\n <<< ");
    scanf("%f", &pib1);
    printf("\n");

    printf("Numero de pontos turisticos, por exemplo, 10 lugares.\n <<< ");
    scanf("%d", &numero_de_pontos_turisticos1);
    printf("\n");

    densidade_demografica1 = populacao1/area1 ;   //caulculando  densidade_demografica1

    printf("Entao, temos a densidade_demográfica. %f\n",populacao1/area1);
    printf("\n");




  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. populacao\n");
  printf("2. numero_de_pontos_turisticos\n");
  printf("3. area\n");
  printf("4. pib\n");
  printf("5. densidade_demografica1\n");
  scanf("%d", &opcao);



    switch (opcao) {
        case 1:
            if(populacao>populacao1){
                printf("populacao>populacao1\n");
	    }
            else if(populacao<populacao1){
                printf("populacao<populacao1\n");
            }
            else{
                printf("populacao eh igual populacao1\n");
            }
	    break;


        case 2:
            if(numero_de_pontos_turisticos>numero_de_pontos_turisticos1){
                printf("numero_de_pontos_turisticos>numero_de_pontos_turisticos1\n");
	    }
            else if(numero_de_pontos_turisticos<numero_de_pontos_turisticos1){
                printf("numero_de_pontos_turisticos<numero_de_pontos_turisticos1\n");
            }
            else{
                printf("numero_de_pontos_turisticos eh igual numero_de_pontos_turisticos1\n");
            }
	    break;


        case 3:
            if(area>area1){
                printf("area>area1\n");
	    }
            else if(area<area1){
                printf("area<area1\n");
            }
            else{
                printf("area eh igual area1\n");
            }
	    break;



        case 4:
            if(pib>pib1){
                printf("pib>pib1\n");
	    }
            else if(pib<pib1){
                printf("pib<pib1\n");
            }
            else{
                printf("pib eh igual pib1\n");
            }
            break;

        case 5:
            if(densidade_demografica>densidade_demografica1){
                printf("densidade_demografica>densidade_demografica1\n");
	    }
            else if(densidade_demografica<densidade_demografica1){
                printf("densidade_demografica<densidade_demografica1\n");
            }
            else{
                printf("densidade_demografica eh igual densidade_demografica1\n");
            }
	    break;

	default:
		printf("nenhuma escolha feita");
	    break;
		

        }

    return 0;
}
