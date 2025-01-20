#include <stdio.h>

    int main() {

        int codigoCidade;
        char nome[50];
        float populacao;
        float area;
        float pib;
        int numPontosTuristicos;

        /// Variáveis declaradas!

        printf("Insira o código da cidade: \n");
        scanf("%i", &codigoCidade);
        printf("Insira o nome da cidade: \n");
        scanf("%s", nome);
        printf("Insira a populacao da cidade: \n");
        scanf("%f", &populacao);
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
        printf("\n");
        printf("Código cidade: %i \n", codigoCidade);
        printf("Nome da cidade: %s \n", nome);
        printf("Populacao da cidade: %.2f \n", populacao);
        printf("Area da cidade: %.2f \n", area);
        printf("Pib da cidade: %.2f \n", pib);

        ///Impressão das informações na tela do usuário.
    
    return 0;
}
