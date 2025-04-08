#include <stdio.h>

int main() {

// VARIÁVEIS
char estado1, estado2;
char codigo1[3], codigo2[3];
int populacao1, turismo1, populacao2, turismo2;
float area1, PIB1, area2, PIB2;

// DADOS PARA A CARTA 01
printf("Digite os dados da primeira carta\nEstado (A-H): ");
scanf("%c", &estado1);

getchar();

printf("Código da carta (Ex: A01): ");
scanf("%s", codigo1);

printf("Digite a população: ");
scanf("%d", &populacao1);

printf("Digite a área (km²): ");
scanf("%f", &area1);

printf("Digite o PIB (em bilhões reais): ");
scanf("%f", &PIB1);

printf("Digite o número de pontos turísticos da cidade: ");
scanf("%d", &turismo1);

// SOLICITANDO DADOS PARA A CARTA 02
printf("Digite os dados da segunda carta\n");
getchar();

printf("Estado (A-H): ");
scanf("%c", &estado2);

getchar();

printf("Código carta (Ex: B02): ");
scanf("%s", codigo2);

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área (km²): ");
scanf("%f", &area2);

printf("Digite o PIB (em bilhões reais): ");
scanf("%f", &PIB2);

printf("Digite o número de pontos turísticos da cidade: ");
scanf("%d", &turismo2);

printf("SEGUE ABAIXO AS INFORMAÇÕES DAS CARTAS\n");

printf("Carta 1\nEstado: %c\n", estado1);
printf("Código: %.3s\n", codigo1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\nPIB: %.2f bilhões\n", area1, PIB1);
printf("Número de pontos turísticos: %d\n", turismo1);

printf("Carta 2\nEstado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\nPIB: %.2f bilhões\n", area2, PIB2);
printf("Número de pontos turísticos: %d\n", turismo2);

printf("OBRIGADO POR JOGAR!");

return 0;

}
