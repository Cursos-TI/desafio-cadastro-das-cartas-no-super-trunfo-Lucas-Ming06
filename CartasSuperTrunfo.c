#include <stdio.h>
int main() {

     unsigned long long int populacao, pontosturistico;
    char estado[10];
    float Pibpercapita, Densidadepopulacional, superPoder, area, pib;
    char codigocarta[70];
    char nomecidade[70];

    //Carta 1

    printf("Digite uma letra entre A e H:\n");
    scanf("%s", estado);

    getchar();

    printf("Escolha um número de 01 a 04:\n");
    scanf("%s", codigocarta);

    getchar();

    printf("Escolha uma cidade:\n");
    scanf("%s", nomecidade);

    getchar();

    printf("Coloque o quilômetro quadrado da cidade: \n");
    scanf("%f", &area);

    printf("Coloque o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a população da cidade:\n");
    scanf("%llu", &populacao);

    getchar();

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%llu", &pontosturistico);

    printf("Carta 1\n");

    printf("Estado: %s \n", estado);

    printf("Código da carta: %s%s\n", estado, codigocarta);

    printf("Nome da Cidade:%s\n", nomecidade);

    printf("População:%llu\n", populacao);

    printf("Área: %.2fkm²\n", area);

    printf("PIB:%.2f Milhões\n", pib);

    printf("Pontos Turísticos: %llu\n", pontosturistico);

    Densidadepopulacional = (float)populacao / area;
    Pibpercapita = (pib * 1000000) / (float)populacao;

    printf ("Densidade Populacional: %f\n", Densidadepopulacional);

    printf ("Pib per Capita: %f\n", Pibpercapita);

    superPoder = populacao + pontosturistico + (pib * 1000000) + area + Pibpercapita +(1/Densidadepopulacional);


    //Carta 2

    unsigned long long int populacao2, pontosturistico2;
    char estado2[10];
    float Pibpercapita2, Densidadepopulacional2, superPoder2, area2, pib2;
    char codigocarta2[70];
    char nomecidade2[70];

    printf("Digite uma letra entre A e H:");
    scanf(" %s", estado2);

    getchar();

    printf("Escolha um número de 01 a 04:");
    scanf("%s", codigocarta2);

    getchar();

    printf("Escolha uma cidade:");
    scanf("%s", nomecidade2);

    getchar();

    printf("Coloque o quilômetro quadrado da cidade:");
    scanf("%f", &area2);

    printf("Coloque o PIB da cidade:");
    scanf("%f", &pib2);

    printf("Digite a população da cidade:");
    scanf("%llu", &populacao2);

    getchar();

    printf("Digite a quantidade de pontos turísticos da cidade:");
    scanf("%llu", &pontosturistico2);

    printf("Carta 2\n");

    printf("Estado: %s\n", estado2);

    printf("Código da carta:%s%s\n", estado2, codigocarta2);

    printf("Nome da Cidade:%s\n", nomecidade2);

    printf("População:%llu\n", populacao2);

    printf("Área:%fkm²\n", area2);

    printf("Pontos Turísticos da Cidade:%llu\n", pontosturistico2);

    Densidadepopulacional2 = (float)populacao2 / area2;
    Pibpercapita2 = (pib2 * 1000000) / (float)populacao2;

    superPoder2 = populacao2 + pontosturistico2 + (pib2 * 1000000) + area2 + Pibpercapita2 +(1/Densidadepopulacional2);

    printf ("Densidade Populacional:%f\n", Densidadepopulacional2);

    printf ("Pib per Capita:%f\n", Pibpercapita2);

    //Comparação das Cartas

    printf("\nComparação das Cartas\n");

    if (populacao > populacao2)
    {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    }
    
   // printf("Comparação da População: %d\n", populacao > populacao2);

   if (area > area2)
   {
       printf("Carta 1 venceu!\n");
   } else {
       printf("Carta 2 venceu!\n");
   }


    //printf("Comparação da Área: %d\n", area > area2);

   if (pib > pib2)
   {
       printf("Carta 1 venceu!\n");
   } else {
       printf("Carta 2 venceu!\n");
   }

    //printf("Comparação do Pib: %d\n", pib > pib2);

    if (pontosturistico < pontosturistico2)
    {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }


   // printf("Comparação dos Pontos Turísticos: %d\n", pontosturistico > pontosturistico2);

   if (Densidadepopulacional < Densidadepopulacional2)
   {
       printf("Carta 1 venceu!\n");
   } else {
       printf("Carta 2 venceu!\n");
   }

   // printf("Comparação da Densidade Populacional: %d\n", Densidadepopulacional < Densidadepopulacional2);

   if (Pibpercapita > Pibpercapita2)
   {
       printf("Carta 1 venceu!\n");
   } else {
       printf("Carta 2 venceu!\n");
   }


   // printf("Comparação do Pib per Capita: %d\n", Pibpercapita > Pibpercapita2);
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;











}
