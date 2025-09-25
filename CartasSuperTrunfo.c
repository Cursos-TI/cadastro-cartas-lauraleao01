#include <stdio.h>

int main() {
    // Carta 1: Brasília
    char estado1[] = "A"; // Letra escolhida com finalidade de desenvolver sequência
    char codigo1[] = "A01"; // código escolhido com finalidade de desenvolver sequência
    char nomeCidade1[] = "Brasília"; // Cidade de uma palavra, para facilicitar o código
    int populacao1 = 3094325; // dados populacionais
    float area1 = 5802.00; // área territorial
    float pib1 = 289.6; // pib n°1
    int pontosTuristicos1 = 25; // número de pontos turísticos

    // Carta 2: Paraná
    char estado2[] = "B"; // Letra escolhida com finalidade de continuar sequência
    char codigo2[] = "B02"; // código escolhido com finalidade de continuar sequência
    char nomeCidade2[] = "Curitiba"; // Cidade de uma palavra, para facilicitar o código
    int populacao2 = 1963726; // dados populacionais
    float area2 = 434.89; // área territorial
    float pib2 = 103.7; // pib n°1
    int pontosTuristicos2 = 40; // número de pontos turísticos

    // Exibição da Carta 1
    printf("Carta 1:\n"); //saída de dados carta n1
    printf("Estado: %s\n", estado1); // saída de dados estado 1 (letra)
    printf("Código: %s\n", codigo1); //saída de dados código da carta 1
    printf("Nome da Cidade: %s\n", nomeCidade1); // saída de dados com nome da cidade
    printf("População: %d\n", populacao1); // saída de dados com número da população
    printf("Área: %.2f km²\n", area1); // saída de dados da área territorial
    printf("PIB: %.2f bilhões de reais\n", pib1); // saída de dados PIB n1
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); /*saída de dados 
    com número de pontos turísticos*/

    // Exibição da Carta 2
    printf("\nCarta 2:\n");//saída de dados carta n1
    printf("Estado: %s\n", estado2); // saída de dados estado 2 (letra)
    printf("Código: %s\n", codigo2); //saída de dados código da carta 2
    printf("Nome da Cidade: %s\n", nomeCidade2); // saída de dados com nome da cidade
    printf("População: %d\n", populacao2); // saída de dados com número da população
    printf("Área: %.2f km²\n", area2); // saída de dados da área territorial
    printf("PIB: %.2f bilhões de reais\n", pib2);  // saída de dados PIB n2
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); /*saída de dados 
    com número de pontos turísticos*/

    return 0;
}