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
    int Populacao;
    float AreaCidade;
    float PIB;
    int PontosTuristicos;

    printf("Digite o Estado: \n");
    scanf(" %[^\n]s", Estado);

    printf("Digite o Codigo da carta: ");
    scanf("%s", Codigocarta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", NomeCidade);

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area da cidade: \n");
    scanf("%f", &AreaCidade);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);

    // Calcular Densidade Populacional e PIB per Capita
    float DensidadePop1 = Populacao / AreaCidade;
    float PIBperCapita1 = PIB / Populacao;

    // Cadastro da Carta 2
    printf("Carta 2\n");

    char Estado2[40];
    char codigo2[20];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Digite o Estado: \n");
    scanf(" %[^\n]s", Estado2);

    printf("Digite o codigo: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km² da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Calcular Densidade Populacional e PIB per Capita
    float DensidadePop2 = populacao2 / area2;
    float PIBperCapita2 = pib2 / populacao2;

    // Exibindo dados da Carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", Codigocarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area da cidade: %.2f km²\n", AreaCidade);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

    // Exibindo dados da Carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area da cidade: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    return 0;
}
