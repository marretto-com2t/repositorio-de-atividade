#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    
    int numeroSorteado = rand() % 100 + 1;
    
    int palpite;
    int tentativas = 0;

    printf("Tente adivinhar o numero sorteado entre 1 e 100.\n");

    do {
        printf("Digite o seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSorteado) {
            printf("Voce chutou muito baixo.\n");
        } else if (palpite > numeroSorteado) {
            printf("Voce chutou muito alto.\n");
        } else {
            printf("Parabens! Voce acertou o numero em %d tentativa(s)!\n", tentativas);
            break;
        }
    } while (1);

    return 0;
}
