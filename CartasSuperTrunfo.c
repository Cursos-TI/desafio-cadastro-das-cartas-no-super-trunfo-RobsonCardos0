#include <stdio.h>
// Esse codigo foi apromorado para calcular desidade poulacional e PIB per capita das cartas de cidades

int main() {

        printf ("Desafio Super Trunfo - Cadastro das Cartas \n");

// Carta 1
    char estado1 = 'A';
    char codigo1[] = "A1";
    char nomeCidade1[] = "Campinas";
    int populacao1 = 1139000;
    float area1 = 794.571;
    float pib1 = 72.950;
    int pontosTuristicos1 = 23;


// Carta 2
    char estado2 = 'B';
    char codigo2[] = "B1";
    char nomeCidade2[] = "Paraty";
    int populacao2 = 45250;
    float area2 = 924.289;
    float pib2 = 1.955;
    int pontosTuristicos2 = 287;
    
    // Cálculos - Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cálculos - Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);


    // Exibição Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);



    return 0;
}
