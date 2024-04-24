#include <stdio.h>
#include <stdbool.h>

int divisiveis (int arr[], int tam, int x) {
    if (tam == 0) {
        return 0;
    }
    else if(arr[tam-1] % x == 0) {
        return 1 +  divisiveis(arr, tam-1, x);
    }
    
        else {
           return divisiveis(arr, tam-1, x);; 
        } 
        
    
}
int main()
{
    int tam,x;
    int arr[100];
    printf("digite o valor do tamanho do array: ");
    scanf("%d", &tam);
    for (int i = 0; i < tam; i++) {
    printf("digite o valor %d no array: ", i);
    scanf("%d", &arr[i]);
    }
    printf("digite o valor de x: ");
    scanf("%d", &x);
    int s = divisiveis(arr,tam,x);
    printf("numeros divisíveis por x: %d \n", s);

    return 0;
}