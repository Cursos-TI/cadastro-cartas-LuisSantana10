#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // carta 1
  char estado1 = 'A';
  int codigoA01 = 1;
  char cidade1[50];
  int populacao1, pontosturisticos1;
  float area1, PIB1;

  //carta 2
  char estado2 = 'B';
  int codigoB01 = 1;
  char cidade2[50];
  int populacao2, pontosturisticos2;
  float area2, PIB2;

  // Área para entrada de dados
  //cidade 1
  printf("Digite o nome da cidade 1: ");
  scanf(" %s", cidade1);

  printf("Digite a quantidade populacional da cidade 1: ");
  scanf(" %d", &populacao1);

  printf("Digite a área da cidade 1:");
  scanf("%f", &area1);

  printf("Digite o pib da cidade 1: ");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turisticos da cidade 1: ");
  scanf("%d", &pontosturisticos1);

  //cidade 2
  printf("Digite o nome da cidade 2: ");
  scanf(" %s", cidade2);

  printf("Digite a quantidade populacional da cidade 2: ");
  scanf(" %d", &populacao2);

  printf("Digite a área da cidade 2:");
  scanf("%f", &area2);

  printf("Digite o pib da cidade 2: ");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turisticos da cidade 2: ");
  scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade
  //Cidade 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %c%02d\n",estado1, codigoA01);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", PIB1);
  printf("Pontos turísticos: %d\n", pontosturisticos1);

  //pular linha entre uma cidade e outra quando der a resposta
  printf("\n");
  printf("\n");

  //Cidade 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %c%02d\n",estado2, codigoB01);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", PIB2);
  printf("Pontos turísticos: %d\n", pontosturisticos2);

return 0;
} 
