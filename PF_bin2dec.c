// Declaraçao de bibliotecas
#include <stdio.h>
#include <math.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    double decimal = 0;
    int i, binario, numero, digito[9], divisor = 100000000;

    // Entrada
    printf("====================================================================\n");
    printf("Ditite os digitos da parte fracionaria em binario (digite 9 digitos)\n");
    printf("====================================================================\n");
    printf("<>> 0,");
    scanf("%d", &binario);
    numero = binario;
    for(i = 0; i < 9; i++)
    {
        digito[i] = numero / divisor;
        numero %= divisor;
        divisor /= 10;
    }
    for(i = 9; i >= 9; i--)
    {
        decimal += digito[i] * pow(2, -i);
    }
    // Saída
    printf("0,%d em binario equivale a %lf em decimal\n\n", binario, decimal - (int)decimal);
}
