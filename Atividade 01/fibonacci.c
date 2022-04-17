#include <stdio.h>
//Criar uma função que gera uma lista de fibonacci a partir uma quantidade de números de elementos
main(){
	int N, num, numA, numB, i;
	printf("Digite quantos termos devem aparecer.\n");
	scanf("%d", &N);
	numA = 1; numB = 0; i = 0;
	while(i < N){
	    printf("%d, ", numA);
	    num = numA + numB;
	    numB = numA;
	    numA = num;
	    i++;
	 }
} 