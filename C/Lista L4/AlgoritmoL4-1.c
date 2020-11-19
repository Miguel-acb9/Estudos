// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    double determinante, matriz[2][2];

    // Entrada
    scanf("%lf %lf", matriz[0][0], matriz[0][1]); 
    scanf("%lf %lf", matriz[1][0], matriz[1][1]);

    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    // Saída
    printf("%.2lf\n", determinante);
    return 0;
}