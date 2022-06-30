/*
Programador: Matheus Ferreira de Oliveira
Linguagem: C++
Data: 29/06/2022

TESTE:
PROBLEMA: Dado um array de numeros e um valor alvo, escrever um algoritmo que encontre todas as combinacoes de dois numeros que somados deem o valor alvo.

Quando uma combinacao for encontrada, imprimir os numeros e os indices correspondentes
Nao somar o numero de uma posicao do array com ele mesmo
Executar o algoritmo com as seguintes entradas:

Array: [1,2,3,4,5,6,7,8,9] / Valor alvo: 10
Array: [3,8,9,6,8,5] / Valor alvo: 10
Array: [4,8,6,1,3,7] / Valor alvo: 7
*/

// MAX vai definir a quantidade de elementos do vetor (array)
#define MAX 9
#include <stdio.h>
int main()
{
	
	//int v[9]; // Declara o vetor com 9 posicoes para ser digitado pelo usuario
	        
	int v[] = {1,2,3,4,5,6,7,8,9}; // Declara o vetor com os valores fixos
	int i, alvo, prox, soma, ocorrencia = 0;
	
/*	
	// Preenchendo o vetor com dados digitados pelo usuario
	printf("Preencha: \n");
	for(i = 0; i < MAX; i++)
	{
		printf("v[%d] = ",i);
		scanf("%d", &v[i]);
	}
*/
	
	// Lendo o valor alvo
	printf("Valor alvo: ");
	scanf("%d", &alvo);
	
	for(i = 0; i < MAX; i++)
	{
		for(prox = 0; prox < MAX; prox++)
		{
			// nao testa o mesmo indice
			if (i != prox)
			{
				soma = v[i] + v[prox];
				// Verifica se a soma dos elementos resulta o alvo
				if (soma == alvo)
				{
					printf("v[%d]:%d + v[%d]:%d = %d => Alvo: %d\n",i,v[i],prox,v[prox],soma,alvo);
					ocorrencia++;	
				}
			}
		}
	}
	
	// Esta rotina exibe "Houve X ocorrencia(s)" no plural ou singular

	// sempre exibe a primeira parte da mentagem
	printf("\nHouve %d ", ocorrencia); 
	// verifica se deve exibir no plurao ou singular
	if (ocorrencia > 1) 
	{
		printf(" ocorrencias");
	}
	else
	{
		printf(" ocorrencia");
	}
}