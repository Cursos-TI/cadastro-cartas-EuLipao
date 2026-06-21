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
    char estado1;//,estado2;
    char codCarta1[10],codCarta2[10];
    char nomeCidade1[50],nomeCidade2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int numTuristico1,numTuristico2;
    
  // Área para entrada de dados
  
     printf("Digite o nome cidade da carta 1: ");
    fgets(nomeCidade1, 50, stdin);
    printf("Digite o Estado da carta 1:\n");
    scanf("%c", &estado1);
    printf("Digite o Código da carta 1:\n");
    scanf("%s", &codCarta1);
    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área da carta 1\n");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1\n");
    scanf("%f", &pib1);

    //tira o quebra linha da fgets
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

  // Área para exibição dos dados da cidade

      printf("Carta 1\n");
      printf("Estado: %c \n",estado1);
      printf("Código da Carta: %s \n",codCarta1);
      printf("Nome da cidade: %s \n",nomeCidade1);
      printf("População: %d \n", populacao1);
      printf("Área: %f km² \n", area1);
      printf("Pib: %f \n",pib1);


return 0;
} 
