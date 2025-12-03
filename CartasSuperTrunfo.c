#include <stdio.h>

int main(){

    char estado1[20], estado2[20];
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;


    printf("Carta 1\n");
    printf("Escreva o Estado: \n");
    scanf("%s", estado1); 

    printf("Escreva o Código: \n");
    scanf("%s", codigo1); 

    printf("Escreva a Cidade:\n");
    scanf("%s", cidade1); 

    printf("Escreva a População: \n");
    scanf("%d", &populacao1);

    printf("Escreva a Área: \n");
    scanf("%f", &area1);

    printf("Escreva o Pib: \n");
    scanf("%f", &pib1);

    printf("Numero de Pontos turisticos: \n");
    scanf("%d", &turistico1);

    printf("-\n");
    printf("-\n");

    printf("Carta2\n");
    printf("Escreva o Estado: \n");
    scanf("%s", estado2); 

    printf("Escreva o Código: \n");
    scanf("%s", codigo2); 

    printf("Escreva a Cidade:\n");
    scanf("%s", cidade2); 

    printf("Escreva a População: \n");
    scanf("%d", &populacao2);

    printf("Escreva a Área: \n");
    scanf("%f", &area2);

    printf("Escreva o Pib: \n");
    scanf("%f", &pib2);

    printf("Numero de Pontos turisticos: \n");
    scanf("%d", &turistico2);




    printf("Carta1 \n");
    printf("Estado: %s \n", estado1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área %f km²\n", area1);
    printf("Pib: %f Bilhões de Reais \n", pib1);
    printf("Pontos Turisticos: %d", turistico1);
    printf("\n");




    printf("Carta2 \n");
    printf("Estado: %s \n", estado2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área %f km²\n", area2);
    printf("Pib: %f Bilhões de Reais \n", pib2);
    printf("Pontos Turisticos: %d", turistico2);
    printf("\n");



    return 0;

}