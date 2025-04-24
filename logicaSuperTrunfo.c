#include <stdio.h> //Biblioteca para entrada e saída de dados.
#include <string.h> //Biblioteca para a manipulação de strings

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

    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2; 

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

    //Menu principal:

    int opcao_atributo, opcao_atributo2; //Variável para pegar a escolha do usuário 
    char vencedor[50]; //Para guardar qual carta venceu 
    char opcao;

    printf("Menu Principal\n");
    printf("A. Iniciar Jogo\n");
    printf("B. Ver informações das cartas\n");
    printf("C. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%c", &opcao);

    switch (opcao)
    {
        case 'A':
            printf("\nBem-vindo(a), escolha dois atributos a ser comparado:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");

            printf("\nEscolha o primeiro atributo: ");
            scanf("%d", &opcao_atributo);

            printf("-- Escolha 1 concluída --\n");
            printf("\n2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");
            printf("\nEscolha o segundo atributo: ");
            scanf("%d", &opcao_atributo2);

            if (opcao_atributo == opcao_atributo2)
            {
                printf("Mesmo atributo, escolha outro: ");
                scanf("%d", &opcao_atributo2);
            if (opcao_atributo == opcao_atributo2)
            {
                printf("Você escolheu o mesmo atributo novamente. Escolha outro: ");
                scanf("%d", &opcao_atributo2);
            }    
            } 
            
            //Variáveis para somar os atributos das cartas
            float somaAtributo1 = 0; //Para carta 1
            float somaAtributo2 = 0; // Para carta 2

            switch (opcao_atributo)
            {
                case 1:
                    //Comparação população:
                    if (populacao1 > populacao2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (populacao2 > populacao1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (populacao1 == populacao2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + populacao1;
                    somaAtributo2 = somaAtributo2 + populacao2;

                    printf("\n");
                    printf("\nResultados\n");
                    printf("Primeira comparação dos atributos:\n");
                    printf("\nNome das cidades das cartas:\n");
                    printf("Carta 1 = %s\n", nomeCidade1);
                    printf("Carta 2 = %s\n", nomeCidade2);
                    printf("Atributo escolhido: População\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %d \n", populacao1);
                    printf("Carta 2 = %d \n", populacao2);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                case 2:
                    //Comparação Área:
                    if (area1 > area2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (area2 > area1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (area1 == area2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + area1;
                    somaAtributo2 = somaAtributo2 + area2;

                    printf("\n");
                    printf("\nResultados\n");
                    printf("Primeira comparação dos atributos:\n");
                    printf("\nNome das cidades das cartas:\n");
                    printf("Carta 1 = %s\n", nomeCidade1);
                    printf("Carta 2 = %s\n", nomeCidade2);
                    printf("Atributo escolhido: Área\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %.2f km²\n", area1);
                    printf("Carta 2 = %.2f km²\n", area2);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                case 3:
                    //Comparação PIB:
                    if (pib1 > pib2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (pib2 > pib1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (pib1 == pib2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + pib1;
                    somaAtributo2 = somaAtributo2 + pib2;

                    printf("\n");
                    printf("\nResultados\n");
                    printf("Primeira comparação dos atributos:\n");
                    printf("\nNome das cidades das cartas:\n");
                    printf("Carta 1 = %s\n", nomeCidade1);
                    printf("Carta 2 = %s\n", nomeCidade2);
                    printf("Atributo escolhido: PIB\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %.2f bilhões de reais\n", pib1 / 1e9); //1e9 para reduzir o valor 
                    printf("Carta 2 = %.2f bilhões de reais\n", pib2 / 1e9);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                case 4:
                    //Comparação Número de Pontos Turísticos:
                    if (qntdPontosTuristicos1 > qntdPontosTuristicos2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (qntdPontosTuristicos2 > qntdPontosTuristicos1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (qntdPontosTuristicos1 == qntdPontosTuristicos2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + qntdPontosTuristicos1;
                    somaAtributo2 = somaAtributo2 + qntdPontosTuristicos2;

                    printf("\n");
                    printf("\nResultados\n");
                    printf("Primeira comparação dos atributos:\n");
                    printf("\nNome das cidades das cartas:\n");
                    printf("Carta 1 = %s\n", nomeCidade1);
                    printf("Carta 2 = %s\n", nomeCidade2);
                    printf("Atributo escolhido: Pontos Turísticos\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %d\n", qntdPontosTuristicos1);
                    printf("Carta 2 = %d\n", qntdPontosTuristicos2);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                case 5:
                    //Comparação Densidade Demográfica:
                    if (inversoDensidade1 < inversoDensidade2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (inversoDensidade2 < inversoDensidade1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (inversoDensidade1 == inversoDensidade2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + inversoDensidade1;
                    somaAtributo2 = somaAtributo2 + inversoDensidade2;

                    printf("\n");
                    printf("\nResultados\n");
                    printf("Primeira comparação dos atributos:\n");
                    printf("\nNome das cidades das cartas:\n");
                    printf("Carta 1 = %s\n", nomeCidade1);
                    printf("Carta 2 = %s\n", nomeCidade2);
                    printf("Atributo escolhido: Densidade Demográfica\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %f\n", inversoDensidade1);
                    printf("Carta 2 = %f\n", inversoDensidade2);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                    default:
                    printf("Opção inválida. Tente novamente.\n");
                    break;

            }
            switch (opcao_atributo2)
            {
                case 1:
                //Comparação população:
                    if (populacao1 > populacao2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (populacao2 > populacao1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (populacao1 == populacao2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + populacao1;
                    somaAtributo2 = somaAtributo2 + populacao2;

                    printf("\nSegunda Comparação dos atributos:\n");
                    printf("Atributo escolhido: População\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %d \n", populacao1);
                    printf("Carta 2 = %d \n", populacao2);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                case 2:
                //Comparação Área:
                    if (area1 > area2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (area2 > area1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (area1 == area2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + area1;
                    somaAtributo2 = somaAtributo2 + area2;

                    printf("\nSegunda Comparação dos atributos:\n");
                    printf("Atributo escolhido: Área\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %.2f km²\n", area1);
                    printf("Carta 2 = %.2f km²\n", area2);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                case 3:
                //Comparação PIB:
                    if (pib1 > pib2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (pib2 > pib1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (pib1 == pib2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + pib1;
                    somaAtributo2 = somaAtributo2 + pib2;

                    printf("\nSegunda Comparação dos atributos:\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %.2f bilhões de reais\n", pib1 / 1e9); //1e9 para reduzir o valor 
                    printf("Carta 2 = %.2f bilhões de reais\n", pib2 / 1e9);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                case 4:
                //Comparação Número de Pontos Turísticos:
                    if (qntdPontosTuristicos1 > qntdPontosTuristicos2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (qntdPontosTuristicos2 > qntdPontosTuristicos1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (qntdPontosTuristicos1 == qntdPontosTuristicos2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + qntdPontosTuristicos1;
                    somaAtributo2 = somaAtributo2 + qntdPontosTuristicos2;

                    printf("\nSegunda Comparação dos atributos:\n");
                    printf("Atributo escolhido: Pontos Turísticos\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %d\n", qntdPontosTuristicos1);
                    printf("Carta 2 = %d\n", qntdPontosTuristicos2);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                case 5:
                //Comparação Densidade Demográfica:
                    if (inversoDensidade1 < inversoDensidade2)
                    {
                        strcpy (vencedor, "Carta 1");
                    }
                    else if (inversoDensidade2 < inversoDensidade1)
                    {
                        strcpy (vencedor, "Carta 2");
                    }
                    else if (inversoDensidade1 == inversoDensidade2)
                    {
                        strcpy (vencedor, "Empate");
                    }

                    somaAtributo1 = somaAtributo1 + inversoDensidade1;
                    somaAtributo2 = somaAtributo2 + inversoDensidade2;

                    printf("\nSegunda Comparação dos atributos:\n");
                    printf("Atributo escolhido: Densidade Demográfica\n");
                    printf("Valores do atributo de cada carta:\n");
                    printf("Carta 1 = %f\n", inversoDensidade1);
                    printf("Carta 2 = %f\n", inversoDensidade2);
                    printf("Carta Vencedora = %s\n", vencedor);
                    break;

                default:
                printf("Opção inválida. Tente novamente.\n");
                break;
            }
                //Resultado final
                printf("\nResultado final da rodada com os valores de cada soma de atributo:\n");
                printf("Carta 1 = %.2f\n", somaAtributo1);
                printf("Carta 2 = %.2f\n", somaAtributo2);
                // Uso do ternário para verificar o vencedor
                (somaAtributo1 > somaAtributo2) ? printf("Carta 1 venceu\n"):
                (somaAtributo1 < somaAtributo2) ? printf("Carta 2 venceu\n"):
                printf("Empate\n");

                break;

        case 'B':
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
            return 0;
            break;

        case 'C':
            printf("Saindo...\n");
            return 0;
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    return 0;
}