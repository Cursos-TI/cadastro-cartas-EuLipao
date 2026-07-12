#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
/*Carta 1:                      Carta 2:
Estado: A                       Estado: B
Código: A01                     Código: B02
Nome da Cidade: São Paulo       Nome da Cidade: Rio de Janeiro
População: 12325000             População: 6748000
Área: 1521.11 km²               Área: 1200.25 km²
PIB: 699.28 bilhões de reais    PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 50 Número de Pontos Turísticos: 30 */

int main() {

  // definição das variáveis

    char estado1,estado2;
    char codCarta1[10],codCarta2[10];
    char nomeCidade1[50],nomeCidade2[50];
    int populacao1,populacao2,numTuristico1,numTuristico2,opcao;  
    float area1,area2;
    float pib1,pib2;
    float DensidadePopulacional1,DensidadePopulacional2;
    float pibpercap1,pibpercap2;
    float superpoder1,superpoder2;
    //char CV + nome aguarda a ConVersão do snprintf do int para char
    char CVpopulacao1[50],CVnumTuristico1[50],CVarea1[20],CVpib1[30],CVdesidadeP1[50],CVpibpercap1[50],CVsuperpoder1[50];

   //snprintf(variel que vai armazenar, sizeof(variel que vai armazenar), "%d", nome da variavel que vai converter);
    
    printf("*****************\n");
    printf("* Super Trunfo! *\n");
    printf("*****************\n");
   
    printf("\n");
    printf("Escolha uma opção\n");
    printf("1. Jogar\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    scanf("%d",&opcao);
    printf("\n");

switch (opcao)
{
  case 1:
      // Área para entrada de dados das CARTA ALTERNADO, PARA USAR O FGETS PRIMEIRO SEM DAR ERRO(depois do swite não funciona só se usar while((getchar()) != '\n') para limpar o buffer)
  while ((getchar()) != '\n');
  
  //NOME CIDADE
    printf("Digite o nome cidade da CARTA 1: ");
    fgets(nomeCidade1, 50, stdin);
      printf("Digite o nome cidade da CARTA 2: ");
      fgets(nomeCidade2, 50, stdin);

  // ESTADO DA CARTA A,B,C,...
    printf("Digite o Estado da CARTA 1: ");
    scanf(" %c", &estado1);
      printf("Digite o Estado da CARTA 2: ");
      scanf(" %c", &estado2);

  // CODIGO DA CARTA
    printf("Digite o Código da CARTA 1: ");
    scanf("%s", &codCarta1);
      printf("Digite o Código da CARTA 2: ");
      scanf("%s", &codCarta2); 

  //POPULAÇÃO
    printf("Digite a população da CARTA 1: ");
    scanf("%d", &populacao1);
      printf("Digite a população da CARTA 2: ");
     scanf("%d", &populacao2);    

  //AREA DE TERRITORIO
    printf("Digite a Área da CARTA 1: ");
    scanf("%f", &area1);
      printf("Digite a Área da CARTA 2: ");
      scanf("%f", &area2);   

  //PIB
    printf("Digite o PIB da CARTA 1: ");
    scanf("%f", &pib1);
      printf("Digite o PIB da CARTA 2: ");
      scanf("%f", &pib2);

  //PONTOS TURISTICOS
    printf("Digite a quantidade de pontos turísticos da CARTA 1 : ");
    scanf("%d", &numTuristico1);
      printf("Digite a quantidade de pontos turísticos da CARTA 2 : ");
      scanf("%d", &numTuristico2);
    printf("\n");

    //tira o quebra linha da fgets
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

   //cálculos Densidade e pib per Capita 
   DensidadePopulacional1 = populacao1/area1;
   DensidadePopulacional2 = populacao2/area2;
   pibpercap1 = (float)pib1/populacao1;
   pibpercap2 = (float)pib2/populacao2;
   superpoder1 = (float)populacao1+area1+pib1+numTuristico1+pibpercap1+DensidadePopulacional1;
   superpoder2 = (float)populacao2+area2+pib2+numTuristico2+pibpercap2+DensidadePopulacional2;

   //converter int e float para string para usar no espaçamento da apresentação das cartas
   //snprintf(variel que vai armazenar, sizeof(variel que vai armazenar), "%d", nome da variavel que vai converter);

    snprintf(CVpopulacao1, sizeof(CVpopulacao1), "%d", populacao1);
    snprintf(CVarea1, sizeof(CVarea1), "%f", area1);
    snprintf(CVdesidadeP1, sizeof(CVdesidadeP1), "%f", DensidadePopulacional1);
    snprintf(CVnumTuristico1, sizeof(CVnumTuristico1), "%d", numTuristico1);
    snprintf(CVpib1, sizeof(CVpib1), "%f", pib1);
    snprintf(CVpibpercap1, sizeof(CVpibpercap1),"%f",pibpercap1);
    snprintf(CVsuperpoder1, sizeof(CVsuperpoder1),"%f", superpoder1);

    

      
  // Área para exibição dos dados da cidade 1

      printf("Carta 1"), printf("                       "), printf("Carta 2\n");
      printf("Estado: %c",estado1),printf("              "),printf("Estado: %c \n",estado2);
      printf("Código da Carta: %s",codCarta1),printf("   "),printf("Código da Carta: %s \n",codCarta2);
      printf("Nome da cidade: %s",nomeCidade1),printf("  "),printf("Nome cidade: %s \n",nomeCidade2);
      printf("População: %d                                     População: %d \n", populacao1,populacao2);
      printf("Área: %.2f km²                                    Área: %.2f km²\n", area1,area2);
      printf("Pib: %.2f bilhões de reais                        Pib:%.2f bilhões de reais  \n",pib1,pib2);    
      printf("Nº de pontos Turísticos: %d                         Nº de pontos Turísticos: %d \n",numTuristico1,numTuristico2);
      printf("Densidade Populacional: %.2f                 Densidade Populacional: %.2f \n",DensidadePopulacional1,DensidadePopulacional2);
      printf("PIB per Capita: %f                                PIB per Capita: %f \n",pibpercap1,pibpercap2);
      printf("Super Poder da Carta 1 : %f                Super Poder da Carta 1 : %f \n", superpoder1,superpoder2);
      printf("\n");

  // Área para exibição dos dados da cidade 2

      
    /*
      printf("Código da Carta: %s \n",codCarta2);
      printf("Nome da cidade: %s \n",nomeCidade2);
      printf("População: %d \n", populacao2);
      printf("Área: %.2f km² \n", area2);
      printf("Pib: %.2f bilhões de reais \n",pib2);
      printf("Nº de pontos Turísticos: %d \n",numTuristico2);
      printf("Densidade Populacional: %.2f \n",DensidadePopulacional2);
      printf("PIB per Capita: %f \n",pibpercap2);
      printf("Super Poder da CARTA 2 : %f  \n",  superpoder2);
      printf("\n");*/


  break;
  case 2:

     printf("O jogo se trata de um duelo de cartas\n");
     printf("O sistema solicita as entradas alternadas da Carta 1 e depois da Carta 2.\n");
     printf("São pedido os dados como Nome da cidade, População,PIB, área m² \n\n");
  
  break;
  case 3:
     
     printf("Jogo finalizado.\n");
     printf("\n");
  break;
    
  default:
  printf("Opção invalida!.");
  break;
}
  

  // comparações de cartas
/*
  printf("*** COMPARAÇÕES DAS CARTAS ***\n");
  printf("Se 1 Carta 1 Ganhou - Se 0 Carta 2 Ganhou\n");
    printf("População: %d \n", populacao1 > populacao2);
    printf("Área: %d \n",area1>area2);
    printf("PIB: %d \n", pib1>pib2);
    printf("Pontos Turísticos: %d \n",numTuristico1>numTuristico2);
    printf("Densidade Populacional: %d \n",DensidadePopulacional1<DensidadePopulacional2);
    printf("PIB per Capita: %d \n",pibpercap1 > pibpercap2);
    printf("Super Poder: %d \n",superpoder1 > superpoder2);
*/
    //teste IF para ver condição de algum item 
   /*printf("\n");
    printf("***** Teste POPULAÇÃO *****\n");
    printf("Carta 1 - %s: %d \n", nomeCidade1,populacao1);
    printf("Carta 2 - %s: %d \n",nomeCidade2,populacao2);
    
    if (populacao1 > populacao2 ){
        
        printf("Resultado: Carta 1 %s venceu!\n",nomeCidade1);
        
    }else{
        printf("Resultado: Carta 2 %s venceu!\n",nomeCidade2);
        
    }
    printf("\n");*/
return 0;

} 
