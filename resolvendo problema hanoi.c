#include <stdio.h>
#include <stdlib.h>

int num_movimentos = 0;//Definir variável de numeros de movimento

void hanoi(int n, char origem, char destino, char auxiliar)//função de hanoi
{
		
	if (n == 1){
		num_movimentos += 1;
		printf("Disco %i - Movendo de %c para %c\n", n, origem, destino); //representa mover o último pino
	}else{
		num_movimentos += 1;
		//lógica de hanói, pilhar e desempilhar.
		hanoi(n-1, origem, auxiliar, destino);
		printf("Disco %i - Movendo de %c para %c\n", n, origem, destino);
		hanoi(n-1, auxiliar, destino, origem);
	}
	
}

main()
{
	int num_discos;//variável n. de discos
	printf("Digite o numero de discos: "); 
	scanf("%i", &num_discos);//leitura para a variável
	hanoi(num_discos, 'A', 'C', 'B');//chama a função
	printf("\nNumero total de movimentos: %i", num_movimentos);
	
	return 0;
}

