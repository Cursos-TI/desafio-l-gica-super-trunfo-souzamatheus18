#include <stdio.h>


   int main(){

       char estado1[2];
       char cidade1[50], cidade2[50];
       char codigo1[5], codigo2[5];
       int populacao1, populacao2;
       float area1, area2;
       float pib1, pib2;
       int pontos1, pontos2;
       char estado2[2];
       float densidade1, densidade2;
       float pibp1, pibp2;
       int escolhaAtributo, escolhaAtributo2;
       int resultado1, resultado2;

       printf ("SUPERTRUNFO\n");

       printf ("Digite a sigla do estado: \n");
       scanf ("%s", &estado1);

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

       printf ("Digite a sigla do outro estado: \n");
       scanf (" %s", &estado2);

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
       printf ("Estado: %s\n", estado1);
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
       printf ("Estado: %s\n", estado2);
       printf ("Código da cidade: %s\n", codigo2);
       printf ("Cidade: %s\n", cidade2);
       printf ("População: %d\n", populacao2);
       printf ("Área KM²: %.2f\n", area2);
       printf ("PIB: %.2f\n", pib2);
       printf ("Pontos turísticos: %d\n", pontos2);
       printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
       printf ("PIB per Capita: %.2f reais\n", pibp2);
       printf("SuperPoder: %.2f\n", superpoder2);

       printf("***Comparação das Cartas***\n");
       printf("Atributos\n");
       printf("1. População.\n");
       printf("2. Área Km².\n");
       printf("3. PIB.\n");
       printf("4. Pontos Turísticos.\n");
       printf("5. Densidade Populacional.\n");
       printf("6. PIB per Capita.\n");
       printf("7. SuperPoder.\n");
       printf("Escolha um atributo: ");
       scanf("%d", &escolhaAtributo); 

       switch (escolhaAtributo)
       {
       case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
       case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        break;
        case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
        case 4:
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        break;
        case 5:
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
        case 6:
         resultado1 = pibp1 > pibp2 ? 1 : 0;
        break;
        case 7:
         resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;      
       default:
       printf("Opção inválida.\n");
        break;
       }

       printf("***Comparação das Cartas***\n");
       printf("Atributos\n");
       printf("1. População.\n");
       printf("2. Área Km².\n");
       printf("3. PIB.\n");
       printf("4. Pontos Turísticos.\n");
       printf("5. Densidade Populacional.\n");
       printf("6. PIB per Capita.\n");
       printf("7. SuperPoder.\n");
       printf("Escolha outro atributo: ");
       scanf("%d", &escolhaAtributo2);

       if (escolhaAtributo == escolhaAtributo2){
        printf("Você escolheu o mesmo atributo.\n");
       } else{
        switch (escolhaAtributo2)
       {
       case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
       case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        break;
        case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
        case 4:
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        break;
        case 5:
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
        case 6:
         resultado1 = pibp1 > pibp2 ? 1 : 0;
        break;
        case 7:
         resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;      
       default:
       printf("Opção inválida.\n");
        break;
       }
       }

       if (resultado1 && resultado2){
        printf("Carta 1 (%s) venceu!\n", cidade1);
       } else if (resultado1 != resultado2){
        printf("Empate!\n");
       } else {
        printf("Carta 2 (%s) venceu!\n", cidade2);
       }

    return 0;


   }