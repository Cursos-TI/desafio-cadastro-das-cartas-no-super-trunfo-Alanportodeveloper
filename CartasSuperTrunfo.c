#include <stdio.h>

int main() {

// Declaração das variáveis para armazenar os dados das duas cartas
char estado1, estado2;  // Armazena a letra do estado para cada carta
char codigoDaCarta1[3], codigoDaCarta2[3];  // Código da carta (2 caracteres + '\0')
char nomeCidade1[50], nomeCidade2[50];  // Nome da cidade, até 49 caracteres
int populacao1, populacao2;  // População das cidades
float area1, area2;  // Área das cidades
float pib1, pib2;  // PIB das cidades
int numeroPontosTuristicos1, numeroPontosTuristicos2;  // Número de pontos turísticos
    
// Indica o início da entrada de dados da primeira carta
printf("Primeira carta.\n\n");

// Solicita a letra do estado (de A a H)
printf("Digite a letra correspondente ao estado de 'A' a 'H': ");
scanf(" %c", &estado1);  // Lê um caractere, ignorando espaços e quebras de linha anteriores

// Solicita o código da carta (dois caracteres)
printf("Digite o código correspondente: ");
scanf("%2s", codigoDaCarta1);  // Lê no máximo 2 caracteres da string

getchar();  // Limpa o buffer, consumindo o '\n' deixado pelo scanf anterior

// Solicita o nome da cidade
printf("Digite o nome da cidade: ");
fgets(nomeCidade1, 50, stdin);  // Lê a linha completa, inclusive com espaços

// Solicita a população da cidade
printf("Digite a população: ");
scanf("%d", &populacao1);  // Lê um número inteiro

// Solicita a área da cidade
printf("Digite a área: ");
scanf("%f", &area1);  // Lê um número com ponto flutuante (float)

// Solicita o PIB da cidade
printf("Digite o PIB: ");
scanf("%f", &pib1);  // Lê o PIB em float

// Solicita o número de pontos turísticos da cidade
printf("Digite o número de pontos turísticos: ");
scanf("%d", &numeroPontosTuristicos1);  // Lê um número inteiro

// Indica o início da entrada de dados da segunda carta
printf("\n\nSegunda carta.\n\n");

// Repetição dos mesmos passos para a segunda cidade
printf("Digite a letra correspondente ao estado de 'A' a 'H': ");
scanf(" %c", &estado2);  // Lê o caractere do estado da segunda cidade

printf("Digite o código correspondente: ");
scanf("%2s", codigoDaCarta2);  // Lê o código da carta

getchar();  // Limpa o buffer antes de usar fgets

printf("Digite o nome da cidade: ");
fgets(nomeCidade2, 50, stdin);  // Lê o nome da cidade com espaços

printf("Digite a população: ");
scanf("%d", &populacao2);  // Lê a população

printf("Digite a área: ");
scanf("%f", &area2);  // Lê a área

printf("Digite o PIB: ");
scanf("%f", &pib2);  // Lê o PIB

printf("Digite o número de pontos turísticos: ");
scanf("%d", &numeroPontosTuristicos2);  // Lê o número de pontos turísticos
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
