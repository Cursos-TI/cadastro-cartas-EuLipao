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
    int populacao1,populacao2,numTuristico1,numTuristico2;   
    float area1,area2;
    float pib1,pib2;
    float DensidadePopulacional1,DensidadePopulacional2;
    float pibpercap1,pibpercap2;

  // Área para entrada de dados das CARTA ALTERNADO, PARA USAR O FGETS PRIMEIRO SEM DAR ERRO
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
   pibpercap1 = pib1/populacao1;
   pibpercap2 = pib2/populacao2;

  // Área para exibição dos dados da cidade 1

      printf("Carta 1\n");
      printf("Estado: %c \n",estado1);
      printf("Código da Carta: %s \n",codCarta1);
      printf("Nome da cidade: %s \n",nomeCidade1);
      printf("População: %d \n", populacao1);
      printf("Área: %2.f km² \n", area1);
      printf("Pib: %2.f bilhões de reais \n",pib1);    
      printf("Nº de pontos Turísticos: %d \n",numTuristico1);
      printf("Densidade Populacional: %2.f \n",DensidadePopulacional1);
      printf("PIB per Capita: %2.f \n",pibpercap1);
      printf("\n");

  // Área para exibição dos dados da cidade 2

      printf("Carta 2\n");
      printf("Estado: %c \n",estado2);
      printf("Código da Carta: %s \n",codCarta2);
      printf("Nome da cidade: %s \n",nomeCidade2);
      printf("População: %d \n", populacao2);
      printf("Área: %f km² \n", area2);
      printf("Pib: %f bilhões de reais \n",pib2);
      printf("Nº de pontos Turísticos: %d \n",numTuristico2);
      printf("Densidade Populacional: %2.f \n",DensidadePopulacional2);
      printf("PIB per Capita: %2.f \n",pibpercap2);
      printf("\n");


return 0;

} 
