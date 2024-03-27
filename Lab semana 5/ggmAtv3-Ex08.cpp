//8. Escreva uma função que recebe dois vetores inteiros A[] e B[] e seus tamanhos. A função deve imprimir na tela os valores referentes à
//INTERSECÇÃO entre os vetores, ou seja, os elementos em comum entre os dois vetores. Considere que os vetores dados não possuem 
//valores duplicados e não estão ordenados.: A[] = { 7, 2, 5, 8, 4} e B[]= {4, 2, 9, 5} então A ? B = {2, 5, 4} // resposta
//A[] = { 3, 9, 11} e B[]= {2, 6, 1} então A ? B= {} 


#include <stdio.h>

void intersecao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("A intersecao B = {");
    
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                printf("%d", A[i]);
                
                // Se não é o último elemento da interseção, imprime uma vírgula.
                if (i < tamanhoA - 1) {
                    printf(", ");
                }
                
                break; // Uma vez que encontramos uma interseção, podemos sair do loop interno.
            }
        }
    }
    
    printf("}\n");
}

int main() {
    int A[] = {7, 3, 6, 8, 4};
    int tamanhoA = sizeof(A) / sizeof(A[0]);
    
    int B[] = {4, 2, 9, 5};
    int tamanhoB = sizeof(B) / sizeof(B[0]);
    
    intersecao(A, tamanhoA, B, tamanhoB);
    
    int C[] = {3, 9, 11};
    int tamanhoC = sizeof(C) / sizeof(C[0]);
    
    int D[] = {2, 6, 1};
    int tamanhoD = sizeof(D) / sizeof(D[0]);
    
    intersecao(C, tamanhoC, D, tamanhoD);
    
    return 0;
}

