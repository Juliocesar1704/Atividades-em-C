#include <stdio.h>

int main() {

    int numero_limite = 1000;
    int soma = 0;
    int numero;

    int num_multiplos_de_3 = 0;
    int num_multiplos_de_5 = 0;
    int num_multiplos_de_15 = 0;

    printf("Iniciando o cálculo da soma dos múltiplos de 3 ou 5 abaixo de %d...\n", numero_limite);
    printf("Aguarde...\n");
    printf("Verificando numeros de 0 a %d\n", numero_limite - 1);

    for(numero = 0; numero < numero_limite; numero++) {
        
        int foi_contado = 0;

        if(numero % 3 == 0){
            num_multiplos_de_3++;
            foi_contado = 1;
        }
        if(numero % 5 == 0){
            num_multiplos_de_5++;

            if(foi_contado){
                num_multiplos_de_15++;
            }
            foi_contado = 1;
        }
        if(foi_contado){
            soma += numero;
            
            if(numero < 20)
                printf("+ %d (soma parcíal: %d)\n", numero, soma);


        }

    }

    printf("\n=== RESULTADOS ===\n");
    printf("Multiplos de 3: %d\n", num_multiplos_de_3);
    printf("Multiplos de 5: %d\n", num_multiplos_de_5);
    printf("Multiplos de 15: %d\n", num_multiplos_de_15);
    printf("Total unicos: %d\n", num_multiplos_de_3 + num_multiplos_de_5 - num_multiplos_de_15);
    printf("\nSOMA FINAL: %d\n", soma);

    printf("\n=== VERIFICACAO ===\n");

    int n_mult_3 = (numero_limite - 1) / 3;
    int ultimo_3 = n_mult_3 * 3;                 
    int soma_pa_3 = n_mult_3 * (3 + ultimo_3) / 2; 
    
    int n_mult_5 = (numero_limite - 1) / 5;
    int ultimo_5 = n_mult_5 * 5;                    
    int soma_pa_5 = n_mult_5 * (5 + ultimo_5) / 2; 
    
    int n_mult_15 = (numero_limite - 1) / 15;
    int ultimo_15 = n_mult_15 * 15;               
    int soma_pa_15 = n_mult_15 * (15 + ultimo_15) / 2;

    int soma_formula = soma_pa_3 + soma_pa_5 - soma_pa_15;

    printf("Soma PA Multiplos de 3: %d\n", soma_pa_3);
    printf("Soma PA Multiplos de 5: %d\n", soma_pa_5);
    printf("Soma PA Multiplos de 15: %d\n", soma_pa_15);
    printf("Soma por formula: %d\n", soma_formula);
    printf("Resultados iguais? %s\n", (soma == soma_formula) ? "SIM" : "NAO");

        return 0;   
}
