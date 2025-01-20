#include <stdio.h>

    int main() {

        char codigoCidade[30];
        char nome[50];
        int populacao;
        float area;
        float pib;
        int numPontosTuristicos;

        /// Variáveis declaradas!

        printf("Insira o código da cidade: \n");
        scanf("%s", &codigoCidade);
        printf("Insira o nome da cidade: \n");
        scanf("%s", nome);
        printf("Insira a populacao da cidade: \n");
        scanf("%i", &populacao);
        printf("Insira a área da cidade: \n");
        scanf("%f", &area);
        printf("Insira o PIB da cidade: \n");
        scanf("%f", &pib);
        printf("Insira o numero de pontos turistos: \n");
        scanf("%i", &numPontosTuristicos);
        printf("\n");
        printf("Você criou uma cidade! ");
        /// Criação da cidade.

        printf("\n");
        printf("Informações: \n");
        printf("Código da cidade: %s .\n", codigoCidade);
        printf("Nome da cidade: %s .\n", nome);
        printf("População da cidade: %.2i habitantes.\n", populacao);
        printf("Área da cidade: %.2f .\n", area);
        printf("Pib da cidade: %.2f .\n", pib);
        printf("Número de pontos turísticos: %i.",numPontosTuristicos);

        ///Impressão das informações na tela do usuário.
    
    return 0;
}
