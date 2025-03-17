#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_NUMERIC, "pt_BR.utf8");

    printf("Desafio Super Trunfo - Países\n");

    // Cadastro da Carta 1
    printf("Carta 1\n");

    char Estado[40];
    char Codigocarta[20];
    char NomeCidade[30];
    unsigned long int Populacao;
    float AreaCidade, PIB, DensidadePop1, PIBperCapita1, SuperPoder1;
    int PontosTuristicos;

    printf("Digite o Estado: \n");
    scanf(" %[^\n]s", Estado);

    printf("Digite o Codigo da carta: ");
    scanf("%s", Codigocarta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", NomeCidade);

    printf("Digite a Populacao: \n");
    scanf("%lu", &Populacao);

    printf("Digite a Area da cidade: \n");
    scanf("%f", &AreaCidade);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);

    // Cálculos para a Carta 1
    DensidadePop1 = Populacao / AreaCidade;
    PIBperCapita1 = PIB / Populacao;
    SuperPoder1 = Populacao + AreaCidade + PIB + PontosTuristicos + PIBperCapita1 + (1 / DensidadePop1);

    // Cadastro da Carta 2
    printf("Carta 2\n");

    char Estado2[40];
    char Codigocarta2[20];
    char NomeCidade2[30];
    unsigned long int Populacao2;
    float AreaCidade2, PIB2, DensidadePop2, PIBperCapita2, SuperPoder2;
    int PontosTuristicos2;

    printf("Digite o Estado: \n");
    scanf(" %[^\n]s", Estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", Codigocarta2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", NomeCidade2);

    printf("Digite a Populacao: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a Area da cidade: \n");
    scanf("%f", &AreaCidade2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos2);

    // Cálculos para a Carta 2
    DensidadePop2 = Populacao2 / AreaCidade2;
    PIBperCapita2 = PIB2 / Populacao2;
    SuperPoder2 = Populacao2 + AreaCidade2 + PIB2 + PontosTuristicos2 + PIBperCapita2 + (1 / DensidadePop2);

    // Comparações e Resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", AreaCidade > AreaCidade2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontosTuristicos > PontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadePop1 < DensidadePop2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    // Exibindo dados da Carta 1
    printf("\nDados da Carta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", Codigocarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %lu\n", Populacao);
    printf("Área da cidade: %.2f km²\n", AreaCidade);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Exibindo dados da Carta 2
    printf("\nDados da Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", Codigocarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área da cidade: %.2f km²\n", AreaCidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    return 0;
}
