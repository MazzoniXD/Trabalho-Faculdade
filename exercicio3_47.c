#include<stdlib.h>
#include<stdio.h>

int main(){
float numero1, numero2, resultado;
int escolha = 0;

    while (escolha != 5)
    {
        //Escolha da operação ou sair
        printf("Qual operacao pretendo fazer:\n");
        printf("1- Adição\n");
        printf("2- Subtração\n");
        printf("3- Multiplicacao\n");
        printf("4- Divisao\n");
        printf("5- Sair\n");
        printf("Restosta: ");
        scanf("%i", &escolha);

        //Depois de opção esolhida
        switch (escolha){
            case 1:
            printf("Digite o primeiro número: ");
            scanf("%f", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%f", &numero2);

            resultado = numero1 + numero2;
            printf("O resultado foi: %f \n\n", resultado);
            break;

            case 2:
            printf("Digite o primeiro número: ");
            scanf("%f", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%f", &numero2);

            resultado = numero1 - numero2;
            printf("O resultado foi: %f \n\n", resultado);
            break;

            case 3:
            printf("Digite o primeiro número: ");
            scanf("%f", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%f", &numero2);

            resultado = numero1 * numero2;
            printf("O resultado foi: %f \n\n", resultado);
            break;

            case 4:
            printf("Digite o primeiro número: ");
            scanf("%f", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%f", &numero2);

            resultado = numero1 / numero2;
            printf("O resultado foi: %f \n\n", resultado);
            break;

            case 5:
            printf("Finalizando o programa...\n\n");
            break;

            default:
            printf("\n\nDigitou um valor invalido...");
            break;
        }
    }
    return 0;
}
