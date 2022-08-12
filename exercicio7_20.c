#include<stdio.h>

int exponencia(int valor){
    int resultado = 0, inicio = 0;
    for(int espone = valor; espone != 0; espone--){
        if(inicio == 0){
            resultado = espone;
            inicio++;
        }else
            resultado *= espone;
    }
    return resultado;
}

int main(){
    int numero = -1;
    while(numero < 0){
        printf("Digite um numero inteiro positivo: ");
        scanf("%i", &numero);
        if(numero >= 0)
            printf("O resultado da exponencial foi: %i", exponencia(numero));
        else
            printf("\nNumero digitado nao valido :(\n\n");
    }
    return 0;
}