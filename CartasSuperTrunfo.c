#include <stdio.h>

int main() {
  
    int população1, população2, npt1, npt2; // npt = número de pontos turísticos
    float PIB1, PIB2, área1, área2;
    char código1[20], código2[20]; 
    char nome1[50], nome2[50];
    char nomeEstado1, nomeEstado2; 
  
    printf("Super Trunfo\n");

    printf("Digite o nome do Estado 1\n");
    scanf(" %c", &nomeEstado1);
    
    printf("Digite o código da cidade 1\n");
    scanf(" %s", &código1);

    printf("Digite o nome da cidade 1\n");
    getchar();
    fgets(nome1, 50, stdin);

    printf("Digite a população 1\n");
    scanf("%d", &população1);

    printf("Digite a área da cidade 1\n");
    scanf("%f", &área1);

    printf("Digite o PIB da cidade 1\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos túristicos 1\n");
    scanf("%d", &npt1);

    printf("Digite o nome do Estado 2\n");
    scanf(" %c", &nomeEstado2);

    printf("Digite o código da cidade 2\n");
    scanf(" %s", &código2);

    printf("Digite o nome da cidade 2\n");
    getchar();
    fgets(nome2, 50, stdin);

    printf("Digite a população 2\n");
    scanf("%d", &população2);

    printf("Digite a área da cidade 2\n");
    scanf("%f", &área2);

    printf("Digite o PIB da cidade 2\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos túristicos 2\n");
    scanf("%d", &npt2);

    printf("\nCARTA 01\n");
    printf("Estado: %c\n", nomeEstado1);
    printf("Cidade:%s\n", nome1);
    printf("Código da cidade: %s\n", código1);
    printf("População: %d\n", população1);
    printf("Área da cidade: %f\n", área1);
    printf("PIB da cidade: %f\n", PIB1);
    printf("Número de pontos turísticos: %d\n", npt1);

    printf("\nCARTA 02\n");
    printf("Estado: %c\n", nomeEstado2);
    printf("Cidade:%s\n", nome2);
    printf("Código da cidade: %s\n", código2);
    printf("População: %d\n", população2);
    printf("Área da cidade: %f\n", área2);
    printf("PIB da cidade: %f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", npt2);

    return 0;
}