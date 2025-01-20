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
    
    return 0;
}
