#include <stdio.h>


   int main(){

       char estado1;
       char cidade1[50], cidade2[50];
       char codigo1[5], codigo2[5];
       int populacao1, populacao2;
       float area1, area2;
       float pib1, pib2;
       int pontos1, pontos2;
       char estado2;
       float densidade1, densidade2;
       float pibp1, pibp2;

       printf ("SUPERTRUNFO\n");

       printf ("Digite uma letra de 'A' a 'H': \n");
       scanf (" %c", &estado1);

       printf ("Digite o código da cidade: \n");
       scanf ("%s", codigo1);

       printf ("Digite a cidade: \n");
       scanf ("%s", cidade1);

       printf ("Digite a população: \n");
       scanf ("%d", &populacao1);

       printf ("Digite a Área em Km²: \n");
       scanf("%f", &area1);

       printf ("Digite o PIB: \n");
       scanf ("%f", &pib1);

       printf ("Digite quantos pontos turisticos tem a cidade: \n");
       scanf ("%d", &pontos1);

       printf ("Digite outra letra de 'A' a 'H': \n");
       scanf (" %c", &estado2);

       printf ("Digite o código da cidade: \n");
       scanf ("%s", codigo2);

       printf ("Digite a cidade: \n");
       scanf ("%s", cidade2);

       printf ("Digite a população: \n");
       scanf ("%d", &populacao2);

       printf ("Digite a Área em Km²: \n");
       scanf("%f", &area2);

       printf ("Digite o PIB: \n");
       scanf ("%f", &pib2);

       printf ("Digite quantos pontos turisticos tem a cidade: \n");
       scanf ("%d", &pontos2);

       densidade1 = populacao1 / area1;
       densidade2 = populacao2 / area2;

       pibp1 = pib1 / populacao1;
       pibp2 = pib2 / populacao2;

       float inversodensidade1 = area1 / populacao1;
       float superpoder1 = (float)populacao1 + area1 + pib1 + (float) pontos1 +pibp1 + inversodensidade1;

       float inversodensidade2 = area2 / populacao2;
       float superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibp2 + inversodensidade2;

       printf ("CARTA 01 \n");
       printf ("Estado: %c\n", estado1);
       printf ("Código da cidade: %s\n", codigo1);
       printf ("Cidade: %s\n", cidade1);
       printf ("População: %d\n", populacao1);
       printf ("Área KM²: %.2f\n", area1);
       printf ("PIB: %.2f\n", pib1);
       printf ("Pontos turísticos: %d\n", pontos1);
       printf ("Densidade Populacional: %.2f hab/km²\n", densidade1);
       printf ("PIB per Capita: %.2f reais\n", pibp1);
       printf ("SuperPoder: %.2f\n", superpoder1);


       printf("CARTA 02 \n");
       printf ("Estado: %c\n", estado2);
       printf ("Código da cidade: %s\n", codigo2);
       printf ("Cidade: %s\n", cidade2);
       printf ("População: %d\n", populacao2);
       printf ("Área KM²: %.2f\n", area2);
       printf ("PIB: %.2f\n", pib2);
       printf ("Pontos turísticos: %d\n", pontos2);
       printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
       printf ("PIB per Capita: %.2f reais\n", pibp2);
       printf("SuperPoder: %.2f\n", superpoder2);

    printf("Comparação das cartas (Atributo: SuperPoder)\n");

    if (superpoder1 > superpoder2) {
        printf("Carta 1 (%s) venceu.\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu\n", cidade2);
    }

    return 0;


   }