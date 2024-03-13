#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	int sorteador;
	srand(time(NULL));
	sorteador = 1+rand()%100;
	
	printf("Digite seu palpite: ");
	int palpite;
	scanf("%d", &palpite);
	while (palpite > 100 || palpite < 0){
		printf("Valor invalido\n");
		printf("Digite seu palpite: ");
	}
	if (palpite == sorteador)
	{
		printf("Muito bem!");
	}
	else
	{
		printf("Tente novamente!\n");
	}
		if (palpite > sorteador)
		{
			printf("Seu palpite foi maior, a resposta deveria ser %i",sorteador);
		}
		else
		{
			printf("Seu palpite foi menor, a resposta deveria ser %i",sorteador);
		}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



