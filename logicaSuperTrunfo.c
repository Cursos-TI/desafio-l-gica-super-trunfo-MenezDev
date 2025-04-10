#include <stdio.h> //Biblioteca para entrada e saída de dados.

//Desafio: Super trunfo - Países
//Tema 2 - Comparação das cartas
//Diferente do tema 1, esse programa já está com as cartas cadastradas sem a necessidade da entrada de dados

int main()
{

    //Váriaveis para guardar os dados das cartas:

    //Carta 1:

    char estado1 = 'A';
    char codigo_carta1[10] = "A01";
    char nomeCidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11; //Em km²
    float pib1 = 699.28; //Bilhões de reais
    int qntdPontosTuristicos1 = 50;

    //Carta 2:

    char  estado2 = 'B';
    char  codigo_carta2[10] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int qntdPontosTuristicos2 = 30;

    //Cálculos das variáveis

    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2; //Váriaveis para guardar o resultado do cálculo da densidade e PIBperCapita

    //Carta 1:
   
    densidadePopulacional1 = (float)populacao1 / area1; //Cálculo densidade populacional
    pib1 = pib1 * 1000000000; // Convertendo o valor digitado (em bilhões) para reais, multiplicando por 1 bilhão
    pibPerCapita1 = pib1 / populacao1; //Cálculo PIB per capita

    //Inverso da densidade:

    float inversoDensidade1, inversoDensidade2; //Para caso se usar a densidade como atributo

    inversoDensidade1 = 1.0 / densidadePopulacional1;

    //Carta 2:
    
    densidadePopulacional2 = (float)populacao2 / area2;
    pib2 = pib2 * 1000000000;
    pibPerCapita2 = pib2 / populacao2;

    //Inverso da densidade

    inversoDensidade2 = 1.0 / densidadePopulacional2;

    //Painel da saída de dados:

    //Informações da carta 1:
    printf("\nInformações das cartas:\n");
    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000); //Divisão do valor do pib por 1 bilhão para exibir em "bilhões de reais"

    printf("Número de Pontos Turísticos: %d\n", qntdPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    //Informações da carta 2:
    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", qntdPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //Comparação de cartas e resultado

    printf("\nComparação de cartas (Atributo: População):\n");

    printf("\nCarta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);

    } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    
    return 0;
}
