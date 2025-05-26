#include <stdio.h>

int main(){
    char V_estado1, V_cod_carta1[4], V_nome_cidade1[50], V_estado2, V_cod_carta2[4], V_nome_cidade2[50];
    unsigned int V_populacao1, V_pont_turisticos1, V_populacao2, V_pont_turisticos2, V_atributo_menu2
    , V_atributo_menu1;
    float V_area1, V_pib1, V_per_capita1, V_densidade1, V_super_poder1, V_area2, V_pib2, V_per_capita2, V_densidade2, V_super_poder2, V_soma_1 = 0, V_soma_2 = 0;

    //Carta 1
        printf("Carta 1: \n");
        //Estado
        printf(" Digite o estado: ");
        scanf(" %c", &V_estado1);
        //Codigo
        printf(" Digite o codigo: ");
        scanf("%s", V_cod_carta1);
        //Nome da Cidade
        printf(" Digite o nome da cidade: ");
        scanf("%s", V_nome_cidade1);
        //População
        printf(" Digite a população: ");
        scanf("%d", &V_populacao1);
        //Area
        printf(" Digite a area: ");
        scanf("%f", &V_area1);
        //PIB
        printf(" Digite o PIB: ");
        scanf("%f", &V_pib1);
        //Pontos Turisticos
        printf(" Digite o numerode pontos turisticos: ");
        scanf("%d", &V_pont_turisticos1);

        V_densidade1 = (float)V_populacao1 / V_area1;
        V_per_capita1 = (V_pib1 * 1000000000) / V_populacao1;

    printf("Carta 1:\n");
    printf("Estado: %c\n", V_estado1);
    printf("Codigo: %s\n", V_cod_carta1);
    printf("Nome da Cidade: %s\n", V_nome_cidade1);
    printf("População: %d\n", V_populacao1);
    printf("Area: %.2f Km²\n", V_area1);
    printf("PIB: %.2f bilhões de reais\n", V_pib1);
    printf("Numero de Pontos Turisticos: %d\n", V_pont_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", V_densidade1);
    printf("PIB per Capita: %.2f reais\n", V_per_capita1);

    //super poder
    V_super_poder1 = V_populacao1 + V_area1 + V_pib1 + V_pont_turisticos1 + V_per_capita1 - V_densidade1;

    //Carta 2
        printf("Carta 2: \n");
        //Estado
        printf(" Digite o estado: ");
        scanf(" %c", &V_estado2);
        //Codigo
        printf(" Digite o codigo: ");
        scanf("%s", V_cod_carta2);
        //Nome da Cidade
        printf(" Digite o nome da cidade:");
        scanf("%s", V_nome_cidade2);
        //População
        printf(" Digite a população: ");
        scanf("%d", &V_populacao2);
        //Area
        printf(" Digite a area: ");
        scanf("%f", &V_area2);
        //PIB
        printf(" Digite o PIB: ");
        scanf("%f", &V_pib2);
        //Pontos Turisticos
        printf(" Digite o numerode pontos turisticos: ");
        scanf("%d", &V_pont_turisticos2);

        V_densidade2 = (float)V_populacao2 / V_area2;
        V_per_capita2 = (float)(V_pib2 * 1000000000) / V_populacao2;

    printf("Carta 2:\n");
    printf("Estado: %c\n", V_estado2);
    printf("Codigo: %s\n", V_cod_carta2);
    printf("Nome da Cidade: %s\n", V_nome_cidade2);
    printf("População: %d\n", V_populacao2);
    printf("Area: %.2f Km²\n", V_area2);
    printf("PIB: %.2f bilhões de reais\n", V_pib2);
    printf("Numero de Pontos Turisticos: %d\n", V_pont_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", V_densidade2);
    printf("PIB per Capita: %.2f reais\n", V_per_capita2);

    //super poder
    V_super_poder2 = V_populacao2 + V_area2 + V_pib2 + V_pont_turisticos2 + V_per_capita2 - V_densidade2;

    //Escolha do atributo vencedor
    printf("\nEscolha 2 atributos para comparar:\n");
    printf(" 1 - População\n");
    printf(" 2 - Area\n");
    printf(" 3 - PIB\n");
    printf(" 4 - Pontos Turisticos\n");
    printf(" 5 - Densidade Demografica\n");

    //Atributo 1 escolhido
    printf("Atributo 1: \n");
    scanf("%d", &V_atributo_menu1);

    //Atributo 2 escolhido
    printf("Atributo 2: \n");
    scanf("%d", &V_atributo_menu2);
    
    printf("\nCidades Escolhidas:\n");
    printf(" - %s\n", V_nome_cidade1);
    printf(" - %s\n", V_nome_cidade2);
    printf("Atributo 1 escolhido:\n");
    
    //Atributo e Carta vencedora
    switch (V_atributo_menu1)
    {
    case 1://População
        V_soma_1 += V_populacao1; 
        V_soma_2 += V_populacao2;
        printf(" - População\n");
        printf("Valores dos atributos:\n");
        printf(" - %d\n", V_populacao1);
        printf(" - %d\n", V_populacao2);
        printf("Carta vencedora:\n");
        if (V_populacao1 > V_populacao2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_populacao1 < V_populacao2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    case 2://Area
        V_soma_1 += V_area1; 
        V_soma_2 += V_area2;
        printf(" - Area\n");
        printf("Valores dos atributos:\n");
        printf(" - %f\n", V_area1);
        printf(" - %f\n", V_area2);
        if (V_area1 > V_area2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_area1 < V_area2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    case 3://PIB
        V_soma_1 += V_pib1; 
        V_soma_2 += V_pib2;
        printf(" - PIB\n");
        printf("Valores dos atributos:\n");
        printf(" - %f\n", V_pib1);
        printf(" - %f\n", V_pib2);
        if (V_pib1 > V_pib2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_pib1 < V_pib2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    case 4://Pontos Turisticos
        V_soma_1 += V_pont_turisticos1; 
        V_soma_2 += V_pont_turisticos2;
        printf(" - Pontos Turisticos\n");
        printf("Valores dos atributos:\n");
        printf(" - %d\n", V_pont_turisticos1);
        printf(" - %d\n", V_pont_turisticos2);
        if (V_pont_turisticos1 > V_pont_turisticos2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_pont_turisticos1 < V_pont_turisticos2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    case 5://Densidade Demografica
        V_soma_1 += V_densidade1; 
        V_soma_2 += V_densidade2;
        printf(" - Densidade Demografica\n");
        printf("Valores dos atributos:\n");
        printf(" - %f\n", V_densidade1);
        printf(" - %f\n", V_densidade2);
        if (V_densidade1 < V_densidade2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_densidade1 > V_densidade2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    default:
        printf("Atributo escolhido nao encontrado!\n");
        break;
    }
    
    printf("Atributo 2 escolhido:\n");
    //Atributo e Carta vencedora
    switch (V_atributo_menu2)
    {
    case 1://População
        V_soma_1 += V_populacao1; 
        V_soma_2 += V_populacao2;
        printf(" - População\n");
        printf("Valores dos atributos:\n");
        printf(" - %d\n", V_populacao1);
        printf(" - %d\n", V_populacao2);
        printf("Carta vencedora:\n");
        if (V_populacao1 > V_populacao2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_populacao1 < V_populacao2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    case 2://Area
        V_soma_1 += V_area1; 
        V_soma_2 += V_area2;
        printf(" - Area\n");
        printf("Valores dos atributos:\n");
        printf(" - %f\n", V_area1);
        printf(" - %f\n", V_area2);
        if (V_area1 > V_area2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_area1 < V_area2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    case 3://PIB
        V_soma_1 += V_pib1; 
        V_soma_2 += V_pib2;
        printf(" - PIB\n");
        printf("Valores dos atributos:\n");
        printf(" - %f\n", V_pib1);
        printf(" - %f\n", V_pib2);
        if (V_pib1 > V_pib2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_pib1 < V_pib2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    case 4://Pontos Turisticos
        V_soma_1 += V_pont_turisticos1; 
        V_soma_2 += V_pont_turisticos2;
        printf(" - Pontos Turisticos\n");
        printf("Valores dos atributos:\n");
        printf(" - %d\n", V_pont_turisticos1);
        printf(" - %d\n", V_pont_turisticos2);
        if (V_pont_turisticos1 > V_pont_turisticos2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_pont_turisticos1 < V_pont_turisticos2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    case 5://Densidade Demografica
        V_soma_1 += V_densidade1; 
        V_soma_2 += V_densidade2;
        printf(" - Densidade Demografica\n");
        printf("Valores dos atributos:\n");
        printf(" - %f\n", V_densidade1);
        printf(" - %f\n", V_densidade2);
        if (V_densidade1 < V_densidade2)
        {
            printf(" - carta 1 venceu\n");
        }
        else{
            if (V_densidade1 > V_densidade2)
            {
                printf(" - carta 2 venceu\n");
            }
            else{
                printf(" - Empate\n");
            }
        }
        break;
    default:
        printf("Atributo escolhido nao encontrado!\n");
        break;
    }

    printf("vencedor da rodada:\n");
    if (V_soma_1 > V_soma_2)
    {
        printf(" - Carta 1 venceu a rodada\n");
    }
    else{
        if (V_soma_1 < V_soma_2)
        {
            printf(" - Carta 2 venceu a rodada\n");
        }
        else{
            printf(" - Empate na rodada\n");
        } 
    }
    
    
    return 0;
}
