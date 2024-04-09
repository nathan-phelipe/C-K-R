#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("Digite a operacao (+, -, *, /): ");
    scanf("%c", &operacao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if(num2 == 0) {
                printf("Erro! Divisao por zero.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}

