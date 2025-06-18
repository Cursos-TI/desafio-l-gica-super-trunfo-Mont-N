#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Título do jogo.
   printf("###SUPER TRUNFO###\n"); 
   printf("\n"); //pular linha

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    /*
    Esta função define as variáveis de duas cartas.
    Parâmetro
    Vaiáveis com final 1, indica a carta 1.
    Vaiáveis com final 2, indica a carta 2.
    */
   char estado1, estado2, opcao; 
   char nomepais1[20], nomepais2[20];
   char codigocarta1[20], codigocarta2[20];
   char nomecidade1[20], nomecidade2[20];
   unsigned long int populacao1, populacao2; //adiconei variaveis carta1 e carta2.
   unsigned int pontos_turisticos1, pontos_turisticos2; 
   float area_km1, area_km2; //atribui valores paras variaveis.
   float pib1, pib2; //atribui valores paras variaveis.
   float densidade1, densidade2; //adicionado densidade1 e densidade2, referente ao nível aventureiro.
   float PIBperc1, PIBperc2, superpoder1, superpoder2; //adicionado superpoder1 e superpoder2, refere ao nível mestre.
   //adiconado PIB per Capita, referente ao nível aventureiro.


   /*
   Menu interativo
   para comparar os atributos
   */
   
   printf("Escolha uma opção -\n");
   printf("\n");

    printf("A. Área Territorial!\n");
    printf("B. PIB!\n");
    printf("C. Pib per Capita!\n");
    printf("D. Densidade!\n");
    printf("P. População!\n");
    printf("T. Pontos Turísticos!\n");
    scanf(" %c", &opcao);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

  
    /*
    Funções abaixo são: Entrada e saída de dados.
    Primeiro entrada com os dados da carta 1.
    Segundo entrada com os dados da carta 2.
    */

   printf("A carta 1: \n");
   printf("\n");//pular linha

   printf("Insira a letra correspondente ao estado da carta 1: ");
   scanf(" %c", &estado1);
   printf("Insira o código do estado da carta 1: ");
   scanf("%s", &codigocarta1);
   printf("Insira o nome do pais da carta 1: ");
   scanf("%s", &nomepais1);
   printf("Insira o nome da cidade correspondente a carta 1: ");
   scanf("%s", &nomecidade1);
   printf("Entre com a quantidade populacional da carta 1: ");
   scanf("%lu", &populacao1);
   printf("Entre com o dado equivalente ao território da carta 1: ");
   scanf("%f", &area_km1);
   printf("Entre com o PIB da carta 1: ");
   scanf("%f", &pib1);
   printf("Insira a quantidade de pontos turísticos da cidade da carta 1: ");
   scanf("%u", &pontos_turisticos1);
   printf("\n");

   printf("A carta 2: \n");
   printf("\n");

   printf("Insira a letra correspondente ao estado da carta 2: ");
   scanf(" %c", &estado2);
   printf("Insira o código do estado da carta 2: ");
   scanf("%s", codigocarta2);
   printf("Insira o nome do pais da carta 2: ");
   scanf("%s", &nomepais2);
   printf("Insira o nome da cidade correspondente a carta 2: ");
   scanf("%s", &nomecidade2);
   printf("Entre com a quantidade populacional da carta 2: ");
   scanf("%lu", &populacao2);
   printf("Entre com o dado equivalente ao território da carta 2: ");
   scanf("%f", &area_km2);
   printf("Entre com o PIB da carta 2: ");
   scanf("%f", &pib2);
   printf("Insira a quantidade de pontos turísticos da cidade da carta 2: ");
   scanf("%u", &pontos_turisticos2);
   printf("\n");
  

  /*
  Esta função cálcula a divisão da Densidade populacional e PIB per Capita.
  float densidade1 = densidade1 = populacao1 / area_km1
  float densidade2 = densidade2 = populacao2 / area_km2
  */

   densidade1 = (float) (populacao1 / area_km1); //densidade populacional = população / area por KM² (carta 1)
   densidade2 = (float) (populacao2 / area_km2); //densidade populacional = população / area por KM² (carta 2)
   PIBperc1 = (float) (populacao1 / pib1); //PIB per Capita = população / pib (carta 1)
   PIBperc2 = (float) (populacao2/ pib2); //PIB per Capita = população / pib (carta 2)

   /*
   Função para comparar e armazenar nas variaveis, superpoder1, superpoder2 e resultado.
   parâmetro
   superpoder1 = população + area + pib + pontos turisticos + pib per capita + densidade invertida = carta1.
   superpoder2 = população + area + pib + pontos turisticos + pib per capita + densidade invertida = carta2.
   */
   
   superpoder1 = (populacao1 + area_km1 + pib1 + pontos_turisticos1 + PIBperc1) + ( 1 / densidade1 );
   superpoder2 = (populacao2 + area_km2 + pib2 + pontos_turisticos2 + PIBperc2) + ( 1 / densidade2 );


   // Exibição dos Dados das Cartas:
   // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
   // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   /*
   Finalizando, mostrando os dados das cartas 1 e carta 2.
   Dados referente so que foi inserido anteriormente.
   */

   printf("DADOS INSERIDOS -\n");
   printf("\n");


   printf("Carta 1:\n");
   printf("\n");

   printf("A letra que representa o estado é: %c\n", estado1);
   printf("O código que representa o estado é: %s\n", codigocarta1);
   printf("O nome do pais é: %s\n", nomepais1);
   printf("O nome da cidade é: %s\n", nomecidade1);
   printf("A quantidade populacional da cidade é: %lu\n", populacao1);
   printf("A quantidade de pontos turísticos da cidade é: %u\n", pontos_turisticos1);
   printf("A área da cidade é: %.2f KM²\n", area_km1);
   printf("O PIB da cidade é: %.2f bilhões de reais\n", pib1);
   printf("A Densidade Populacional da cidade é: %.2f hab/KM²\n", densidade1); //Adicionado a exibição da densidade populacional da carta 1
   printf("O PIB per Capita da cidade é: %.2f $\n",  PIBperc1); //Adicionado o PIB per Capita da carta 1
   printf("SUPER PODER da carta 1 é: %f\n", superpoder1); //Adicionado super poder carta 1
   printf("\n");

   printf("Carta 2:\n");
   printf("\n");

   printf("A letra que representa o estado é: %c\n", estado2);
   printf("O código que representa o estado é: %s\n", codigocarta2);
   printf("O nome do pais é: %s\n", nomepais2);
   printf("O nome da cidade é: %s\n", nomecidade2);
   printf("A quantidade populacional da cidade é: %lu\n", populacao2);
   printf("A quantidade de pontos turísticos da cidade é: %u\n", pontos_turisticos2);
   printf("A área da cidade é: %.2f KM²\n", area_km2);
   printf("O PIB da cidade é: %.2f bilhões de reais\n", pib2);
   printf("A Densidade Populacional da carta 2 é: %.2f hab/KM²\n", densidade2); //Adicionado a exibição da densidade populacional da carta 1
   printf("O PIB per Capita da carta 2 é: %.2f $\n",  PIBperc2); //Adicionado o PIB per Capita da carta 1
   printf("SUPER PODER da carta 2 é: %f\n", superpoder2); //Adicionado super poder carta 2
   printf("\n");

   /*
   Função para exibir os resutados de acordo com oque foi inserido no menu.
   switch(condicao)
   {
   carta 1 venceu
   }senao{
   carta 2 venceu
   }senao{
   empate
   }senao{
   opcao invalida
   }
   */

   switch(opcao)
   {
    case 'A':
    case 'a':
      if(area_km1 > area_km2)
    {
        printf("A carta 1 venceu!\n");
        printf("Carta 1: %s\n", nomepais1);
        printf("Carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: Área territorial\n");
        printf("Área territorial da carta 1: %.2f - Área territorial da carta 2: %.2f\n", area_km1, area_km2);
        printf("\n");
    }else if(area_km1 < area_km2)
    {
        printf("A carta 2 venceu!\n");
        printf("Carta 1: %s\n", nomepais1);
        printf("carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: Área territorial\n");
        printf("Área territorial da carta 1: %.2f - Área territorial da carta 2: %.2f\n", area_km1, area_km2);
        printf("\n");
    }else{
        printf("Houve empate!\n");
        printf("Carta 1: %s\n", nomepais1);
        printf("carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: Área territorial\n");
        printf("A área da carta 1 é: %.2f\n", area_km1);
        printf("A área da carta 2 é: %.2f\n", area_km2);
        printf("\n");
    } 

       break;      
    case 'B':
    case 'b':
      if(pib1 > pib2)
    {
        printf("A carta 1 venceu!\n"); 
        printf("Carta 1: %s\n", nomepais1);
        printf("carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: PIB\n");
        printf("PIB da carta 1: %.2f - PIB da carta 2: %.2f\n", pib1, pib2);
        printf("\n");
    }else if (pib1 < pib2)
    {
        printf("A carta 2 venceu!\n");
        printf("Carta 1: %s\n", nomepais1);
        printf("carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: PIB\n");
        printf("PIB da carta 1: %.2f - PIB da carta 2: %.2f\n", pib1, pib2);
        printf("\n");
    }else{
        printf("Houve empate!\n");
        printf("Carta 1: %s\n", nomepais1);
        printf("carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: PIB\n");
        printf("PIB da carta 1 é: %.2f\n", pib1);
        printf("PIB da carta 2 é: %.2f\n", pib2);
        printf("\n"); 
    }

       break;
    case 'C':       
    case 'c':
    if(PIBperc1 > PIBperc2)
    {
        printf("A carta 1 venceu!\n"); 
        printf("Carta 1: %s\n", nomepais1);
        printf("carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: PIB per Capita\n");
        printf("PIB per Capita da carta 1: %.2f - PIB per Capita da carta 2: %.2f\n", PIBperc1, PIBperc2);
        printf("\n");
    }else if( PIBperc1 < PIBperc2)
    {
        printf("A carta 2 venceu!\n"); 
        printf("Carta 1: %s\n", nomepais1);
        printf("carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: PIB per Capita\n");
        printf("PIB per Capita da carta 1: %.2f - PIB per Capita da carta 2: %.2f\n", PIBperc1, PIBperc2);
        printf("\n");
    }else{
        printf("Houve empate!\n");
        printf("Carta 1: %s\n", nomepais1);
        printf("carta 2: %s\n", nomepais2);
        printf("Atributo comparado foi: PIB per Capita\n");
        printf("PIB per Capita da carta 1 é: %.2f\n", PIBperc1);
        printf("PIB per Capita da carta 2 é: %.2f\n", PIBperc2);
        printf("\n");
    }
          
       break;
    case 'D':   
    case 'd':
    if(densidade1 < densidade2)
    {
            printf("A carta 1 venceu!\n"); 
            printf("Carta 1: %s\n", nomepais1);
            printf("carta 2: %s\n", nomepais2);
            printf("Atributo comparado foi: Densidade Populacional\n");
            printf("PIB per Capita da carta 1: %.2f - PIB per Capita da carta 2: %.2f\n", densidade1, densidade2);
            printf("\n");
    }else if (densidade1 > densidade2)
    {
            printf("A carta 2 venceu!\n"); 
            printf("Carta 1: %s\n", nomepais1);
            printf("carta 2: %s\n", nomepais2);
            printf("Atributo comparado foi: Densidade Populacional\n");
            printf("PIB per Capita da carta 1: %.2f - PIB per Capita da carta 2: %.2f\n", densidade1, densidade2);
            printf("\n");
    }else{
            printf("Houve empate!\n");
            printf("Carta 1: %s\n", nomepais1);
            printf("carta 2: %s\n", nomepais2);
            printf("Atributo comparado foi: Densidade Populacional\n");
            printf("A densidade populacional da carta 1 é: %.2f\n", densidade1);
            printf("A densidade populacional da carta 2 é: %.2f\n", densidade2);
            printf("\n");
    }
         
       break;
    case 'P':
    case 'p':
    if(populacao1 > populacao2)
     {
           printf("Carta 1 venceu!\n");
           printf("Carta 1: %s\n", nomepais1);
           printf("carta 2: %s\n", nomepais2);
           printf("Atributo comparado foi: População\n");
           printf("População total da carta 1: %lu - População total da carta 2: %lu\n", populacao1, populacao2);
           printf("\n");
     }else if(populacao1 < populacao2)
     {
           printf("Carta 2 venceu!\n");
           printf("Carta 1: %s\n", nomepais1);
           printf("carta 2: %s\n", nomepais2);
           printf("Atributo comparado foi: População\n");
           printf("População total da carta 1: %lu - População total da carta 2: %lu\n", populacao1, populacao2);
           printf("\n");
     }else{
           printf("Houve empate!\n");
           printf("Carta 1: %s\n", nomepais1);
           printf("carta 2: %s\n", nomepais2);
           printf("Atributo comparado foi: Densidade Populacional\n");
           printf("A população total da carta 1 é: %lu\n", populacao1);
           printf("A população da carta 2 é: %lu\n", populacao2);
           printf("\n");
     }
          
       break;
    case 'T':
    case 't':
    if(pontos_turisticos1 > pontos_turisticos2)
    {
           printf("Carta 1 venceu!\n");
           printf("Carta 1: %s\n", nomepais1);
           printf("carta 2: %s\n", nomepais2);
           printf("Atributo comparado foi: Pontos Turísticos\n");
           printf("Total de pontos turíticos da carta 1: %u - Total de pontos turíticos da carta 2: %u\n", pontos_turisticos1, pontos_turisticos2);
           printf("\n");
    }else if(pontos_turisticos1 < pontos_turisticos2)
    {
           printf("Carta 2 venceu!\n");
           printf("Carta 1: %s\n", nomepais1);
           printf("carta 2: %s\n", nomepais2);
           printf("Atributo comparado foi: Pontos Turísticos\n");
           printf("Total de pontos turíticos da carta 1: %u - Total de pontos turíticos da carta 2: %u\n", pontos_turisticos1, pontos_turisticos2);
           printf("\n");
    }else{
           printf("Houve empate!\n");
           printf("Carta 1: %s\n", nomepais1);
           printf("carta 2: %s\n", nomepais2);
           printf("Atributo comparado foi: Pontos turísticos\n");
           printf("A população total da carta 1 é: %u\n", pontos_turisticos1);
           printf("A população da carta 2 é: %u\n", pontos_turisticos2);
           printf("\n");
    }
      break;
    default:
          printf("xxx Opção inválida xxx\n");
          printf("\n");
    break;
   }

   return 0;
}
