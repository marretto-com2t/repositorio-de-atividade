#include <stdio.h>

int main() {
    int num, sum = 0;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

   
    if (sum == num) {
        printf("%d � um numero perfeito.\n", num);
    } else {
        printf("%d n�o � um numero perfeito.\n", num);
    }

    return 0;
}





