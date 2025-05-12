#include <stdio.h>  // Inclusão da biblioteca padrão de entrada e saída

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    char estado1, estado2;  // Armazena a letra do estado para cada carta (A a H)
    char codigoDaCarta1[3], codigoDaCarta2[3];  // Código da carta
    char nomeCidade1[50], nomeCidade2[50];  // Nome da cidade, até 49 caracteres
    unsigned long int populacao1, populacao2;  // População das cidades
    float area1, area2;  // Área das cidades
    float pib1, pib2;  // Produto Interno Bruto das cidades
    int numeroPontosTuristicos1, numeroPontosTuristicos2;  // Número de pontos turísticos

    // ---------- Entrada de dados da primeira carta ----------
    printf("Primeira carta.\n\n");

    printf("Digite a letra correspondente ao estado de 'A' a 'H': ");
    scanf(" %c", &estado1);  // Lê a letra do estado

    printf("Digite o código correspondente: ");
    scanf("%2s", codigoDaCarta1);  // Lê o código da carta (máximo 2 caracteres)

    getchar();  // Limpa o buffer do teclado, removendo o '\n' que sobra do scanf anterior

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, 50, stdin);  // Lê o nome completo da cidade

    printf("Digite a população: ");
    scanf("%lu", &populacao1);  // Lê a população (unsigned long int)

    printf("Digite a área: ");
    scanf("%f", &area1);  // Lê a área da cidade

    printf("Digite o PIB: ");
    scanf("%f", &pib1);  // Lê o PIB da cidade

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos1);  // Lê número de pontos turísticos

    // ---------- Cálculos da primeira carta ----------
    float densidadePopulacional1 = (float)populacao1 / area1;  // Densidade populacional
    float pibPerCapita1 = pib1 / populacao1;  // PIB per capita (PIB dividido pela população)
    float calcularInversoDensidade1 = 1.0 / densidadePopulacional1;  // Inverso da densidade
    float superpoder1 = (float)populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1 + calcularInversoDensidade1;  // Super Poder total

    // ---------- Entrada de dados da segunda carta ----------
    printf("\n\nSegunda carta.\n\n");

    printf("Digite a letra correspondente ao estado de 'A' a 'H': ");
    scanf(" %c", &estado2);  // Lê a letra do estado

    printf("Digite o código correspondente: ");
    scanf("%2s", codigoDaCarta2);  // Lê o código da carta

    getchar();  // Limpa o buffer antes de usar fgets novamente

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, 50, stdin);  // Lê o nome completo da cidade

    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // Lê a população

    printf("Digite a área: ");
    scanf("%f", &area2);  // Lê a área

    printf("Digite o PIB: ");
    scanf("%f", &pib2);  // Lê o PIB

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);  // Lê o número de pontos turísticos

    // ---------- Cálculos da segunda carta ----------
    float densidadePopulacional2 = (float)populacao2 / area2;  // Densidade populacional
    float pibPerCapita2 = pib2 / populacao2;  // PIB per capita
    float calcularInversoDensidade2 = 1.0 / densidadePopulacional2;  // Inverso da densidade
    float superpoder2 = (float)populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2 + calcularInversoDensidade2;  // Super Poder total

    // ---------- Comparações entre as duas cartas ----------
    printf("\n\nComparação de cartas\n\n");

    // Comparações diretas entre os atributos
    printf("População: carta 1 venceu (%d)\n", populacao1 > populacao2);  // 1 se carta 1 tem mais população
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);  // 1 se carta 1 tem maior área
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);  // 1 se carta 1 tem maior PIB
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", numeroPontosTuristicos1 > numeroPontosTuristicos2);  // 1 se carta 1 tem mais pontos
    printf("Densidade populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);  // 1 se carta 1 tem menor densidade
    printf("PIB per capita: Carta 1 venceu (%d) \n", pibPerCapita1 > pibPerCapita2);  // 1 se carta 1 tem maior PIB per capita
    printf("Super poder: carta 1 venceu (%d)\n", superpoder1 > superpoder2);  // 1 se carta 1 tem maior Super Poder

    return 0;  // Finaliza o programa
}
