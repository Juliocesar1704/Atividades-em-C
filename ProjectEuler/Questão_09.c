#include <stdio.h>

int main(void) {
    int A = 0, B = 0, C = 0;
    int valorT = 0;
    int encontrado = 0;  
    
    printf("Buscando tripleto pitagorico com soma 1000...\n");
    
        for (A = 0; A <= 1000; A++) {
        
        for (B = A + 1; B <= 1000; B++) {
            
            C = 1000 - A - B;
            
            
            if (C <= B) {
                continue;
            }
            
            if (A*A + B*B == C*C) {
                valorT = A + B + C;
                printf("\n=== TRIPLETO ENCONTRADO ===\n");
                printf("A = %d\n", A);
                printf("B = %d\n", B);
                printf("C = %d\n", C);
                printf("Soma A + B + C = %d\n", valorT);
                printf("Produto A * B * C = %d\n", A * B * C);
                encontrado = 1;
                break;
            }
        }
        
        if (encontrado) {
            break;
        }
    }
    
    if (!encontrado) {
        printf("Nenhum tripleto encontrado!\n");
    }
    
    return 0;
}
