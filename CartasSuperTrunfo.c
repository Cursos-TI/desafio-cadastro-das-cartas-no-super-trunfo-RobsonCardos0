#include <stdio.h>
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    int main() {

        printf ("Desafio Super Trunfo - Cadastro das Cartas \n");

// Variáveis definidas separadas para cada atributo da cidade carta 1.
// Informações de cada cidade, como o código, nome, população, área Carta 1.

    char estado1 = 'A';
    char codigo1[] = "A1";
    char nomeCidade1[] = "Campinas";
    int populacao1 = 1139000;
    float area1 = 794.571;
    float pib1 = 72.950;
    int pontosTuristicos1 = 23;


// Variáveis definidas separadas para cada atributo da cidade carta 2.
// Informações de cada cidade, como o código, nome, população, área carta 2.

    char estado2 = 'B';
    char codigo2[] = "B1";
    char nomeCidade2[] = "Paraty";
    int populacao2 = 45250;
    float area2 = 924.289;
    float pib2 = 1.955;
    int pontosTuristicos2 = 287;
    
  // Exibição dos Dados das Cartas:
     // Sugestão: Utilizado  função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
     // Exibido os  valores inseridos para cada atributo da cidade, um por linha.


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
