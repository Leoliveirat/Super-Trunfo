#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    char Estado, codigo, cidade;
    int populacao;
    float area, pib;
    int pontos_turisticos;


    printf ("BEM VINDO AO SUPER TRUNFO \n");

    printf ("Primeiro passo será cadastrar as cartas, será um total de 32 cartas, VAMOS LÁ? \n");


// CARTA 1

    printf ("CARTA 1 \n");

    printf("Digite o Estado: \n");
    scanf("%[^\n]", &Estado);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf("%[^\n]", &cidade);

    printf("Digite sua populção: \n");
    scanf("%d", &populacao);

    printf("Digite a área em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos \n");
    scanf("%d", &pontos_turisticos);
    

    return 0;
}