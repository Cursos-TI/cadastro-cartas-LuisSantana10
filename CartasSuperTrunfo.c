#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Variáveis gerais
  int resultado1, resultado2;

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // carta 1
  char estado1[50];
  unsigned int codigo1;
  char cidade1[50];
  int populacao1, pontosturisticos1, escolha1;
  float area1, PIB1;
  float PIBpercapta1, densidade1;
  float superpoder1;

  //carta 2
  char estado2[50];
  unsigned int codigo2;
  char cidade2[50];
  int populacao2, pontosturisticos2, escolha2;
  float area2, PIB2;
  float PIBpercapta2, densidade2;
  float superpoder2;

  // Área para entrada de dados
  //cidade 1
  printf("Digite o nome do estado 1: ");
  scanf(" %s", estado1);

  printf("Digite o codigo da cidade 1: ");
  scanf(" %u", &codigo1);

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

  //Cálculo de densidade populacional e PIB per capta
  densidade1 = populacao1 / area1;
  PIBpercapta1 = PIB1 / populacao1;

  //cidade 2
  printf("Digite o nome do estado 2: ");
  scanf(" %s", estado2);

  printf("Digite o codigo da cidade 2: ");
  scanf(" %u", &codigo2);

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

  //Cálculo de densidade populacional e PIB per capta
  densidade2 = populacao2 / area2;
  PIBpercapta2 = PIB2 / populacao2;

  //Super poder
  superpoder1 = populacao1 + pontosturisticos1 + area1 + PIB1 + densidade1 + PIBpercapta1;
  superpoder2 = populacao2 + pontosturisticos2 + area2 + PIB2 + densidade2 + PIBpercapta2;


  // Área para exibição dos dados da cidade
  //Cidade 1
  printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %u\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f milhões de reais\n", PIB1);
  printf("Pontos turísticos: %d\n", pontosturisticos1);
  printf("Densidade populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capta: %.2f reais\n", PIBpercapta1);
  printf("Nível do super poder: %.2f\n", superpoder1);

  //pular linha entre uma cidade e outra quando der a resposta
  printf("\n");
  printf("\n");

  //Cidade 2
  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %u\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f milhões de reais\n", PIB2);
  printf("Pontos turísticos: %d\n", pontosturisticos2);
  printf("Densidade populacional: %.2f  hab/km²\n", densidade2);
  printf("PIB per capta: %.2f reais\n", PIBpercapta2);
  printf("Nível do super poder: %.2f\n", superpoder2);


  //Menu interativo para comparação das cidades
  printf("*** Super Trunfo ***\n");
  printf("Selecione qual atributo deve ser comparado.\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Demográfica\n");
  printf("6. PIB per capita\n");
  printf("7. Super Poder\n");
  scanf("%d", &escolha1);

  printf("*** Super Trunfo ***\n");
  printf("Selecione o segundo atributo que deve ser comparado (não escolha o mesmo de antes).\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Demográfica\n");
  printf("6. PIB per capita\n");
  printf("7. Super Poder\n");
  scanf("%d", &escolha2);

  if (escolha1 == escolha2)
  {
    printf("Você escolheu o mesmo atributo!\n");
  } else{
    printf("Número dos atributos escolhidos: %d e %d\n", escolha1, escolha2);
  }
  



  //Comparação das 2 cidades
  printf("\n");
  printf("*** Comparação das cidades ***\n");

  //população
  switch (escolha1){
    case 1: 
      printf("Atributo: População\n");
    printf("Carta 1 - %s(%s): %d\n", estado1, cidade1, populacao1);
    printf("Carta 2 - %s(%s): %d\n", estado2, cidade2, populacao2);
    resultado1 = populacao1 > populacao2 ? 1 : 0;
  break;

  //Área
    case 2:
      printf("Atributo: Área\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, area1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, area2);
    resultado1 = area1 > area2 ? 1 : 0;
  break;

  //PIB
    case 3:
            printf("Atributo: PIB\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, PIB1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, PIB2);
    resultado1 = PIB1 > PIB2 ? 1 : 0;
  break;

  //Pontos Turísticos
    case 4:
    printf("Atributo: Pontos Turísticos\n");
    printf("Carta 1 - %s(%s): %d\n", estado1, cidade1, pontosturisticos1);
    printf("Carta 2 - %s(%s): %d\n", estado2, cidade2, pontosturisticos2);
    resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;

    //densidade
    case 5:
        printf("Atributo: Densidade\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, densidade1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, densidade2);
    resultado1 = densidade1 < densidade2 ? 1 : 0;

      break;

      //PIB per capita
      case 6:
          printf("Atributo: PIB per capita\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, PIBpercapta1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, PIBpercapta2);
    resultado1 = PIBpercapta1> PIBpercapta2 ? 1 : 0;
        break;

      //super poder
    case 7:
          printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, superpoder1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, superpoder2);
    resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;
    
    
    default:
    printf("Opção inválida");
        break;
    }
    printf("\n");

    //receber os pontos do resultado 2
      switch (escolha2){
    case 1: 
      printf("Atributo: População\n");
    printf("Carta 1 - %s(%s): %d\n", estado1, cidade1, populacao1);
    printf("Carta 2 - %s(%s): %d\n", estado2, cidade2, populacao2);
    resultado2 = populacao1 > populacao2 ? 1 : 0;
  break;

  //Área
    case 2:
      printf("Atributo: Área\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, area1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, area2);
    resultado2 = area1 > area2 ? 1 : 0;
  break;

  //PIB
    case 3:
            printf("Atributo: PIB\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, PIB1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, PIB2);
    resultado2 = PIB1 > PIB2 ? 1 : 0;
  break;

  //Pontos Turísticos
    case 4:
    printf("Atributo: Pontos Turísticos\n");
    printf("Carta 1 - %s(%s): %d\n", estado1, cidade1, pontosturisticos1);
    printf("Carta 2 - %s(%s): %d\n", estado2, cidade2, pontosturisticos2);
    resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;

    //densidade
    case 5:
        printf("Atributo: Densidade\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, densidade1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, densidade2);
    resultado2 = densidade1 < densidade2 ? 1 : 0;

      break;

      //PIB per capita
      case 6:
          printf("Atributo: PIB per capita\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, PIBpercapta1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, PIBpercapta2);
    resultado2 = PIBpercapta1> PIBpercapta2 ? 1 : 0;
        break;

      //super poder
    case 7:
          printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s(%s): %.2f\n", estado1, cidade1, superpoder1);
    printf("Carta 2 - %s(%s): %.2f\n", estado2, cidade2, superpoder2);
    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
        break;
}
        printf("\n");

    //mostrar o resultado das duas comparações
    printf("*** Super Trunfo ***\n");
    printf("Segue o resultado do jogo:\n");
    if (resultado1 == 1 && resultado2 == 1)
    {
      printf("A cidade 1 venceu!\n");
    } else if (resultado1 != resultado2)
    {
      printf("As cidades empataram nos atributos escolhidos!\n");
    } else{
      printf("A cidade 2 venceu!\n");
    }
  
    printf("\n");


  printf("Você chegou ao fim do jogo, obrigado por jogar!\n");

return 0;
}
