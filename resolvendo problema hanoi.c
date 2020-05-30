#include <stdio.h>
#include <stdlib.h>

int num_movimentos = 0;//Definir vari�vel de numeros de movimento

void hanoi(int n, char origem, char destino, char auxiliar)//fun��o de hanoi
{
		
	if (n == 1){
		num_movimentos += 1;
		printf("Disco %i - Movendo de %c para %c\n", n, origem, destino); //representa mover o �ltimo pino
	}else{
		num_movimentos += 1;
		//l�gica de han�i, pilhar e desempilhar.
		hanoi(n-1, origem, auxiliar, destino);
		printf("Disco %i - Movendo de %c para %c\n", n, origem, destino);
		hanoi(n-1, auxiliar, destino, origem);
	}
	
}

main()
{
	int num_discos;//vari�vel n. de discos
	printf("Digite o numero de discos: "); 
	scanf("%i", &num_discos);//leitura para a vari�vel
	hanoi(num_discos, 'A', 'C', 'B');//chama a fun��o
	printf("\nNumero total de movimentos: %i", num_movimentos);
	
	return 0;
}

