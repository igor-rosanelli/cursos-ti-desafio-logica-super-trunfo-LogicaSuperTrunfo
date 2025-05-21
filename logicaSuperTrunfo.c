#include <stdio.h>

int main(){
    //variáveis carta 1
    char estado1[3], codigo1[4], cidade1[50];
    int unsigned long populacao1;
    int pontos1;
    float area1, pib1, densidade1, capita1;

    //variáveis carta 2
    char estado2[3], codigo2[4], cidade2[50];
    int unsigned long populacao2;
    int pontos2;
    float area2, pib2, densidade2, capita2;

    //entrada dados carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (Ex: SP): ");
    scanf(" %s", &estado1);

    printf("Código da Carta (ex: A01):");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer antes de usar fgets
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // remove \n ao final da string

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada dados carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (Ex: SP): ");
    scanf("%s", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer antes de usar fgets
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // remove \n ao final da string

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 =  populacao2 / area2;
    capita2 =  (pib2 * 1000000000) / populacao2;


    // Exibição dados Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);


     // Exibição dados Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

     // Atributo escolhido: Densidade populacional
    printf("\nComparação de cartas (Atributo: Densidade populacional):\n\n");

    printf("Carta 1 - %s (%s): %.2f\n",cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f\n",cidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;

}
