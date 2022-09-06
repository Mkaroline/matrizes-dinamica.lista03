#include <stdio.h>// biblioteca principais 

int main(void) {//funcao principal

	int n, i, j;//declaracao das variaveis 
	
	printf("Digite o tamanho da matriz:\n");//solicitar para o usuario inserir os numeros
	scanf("%i", &n);//ler e guardar o valor na variavel n
	
	int mat[n][n];//declaracao da matriz
	
	for (i = 0; i < n; i++) {//laco de repeticao para as linhas
       for (j = 0; j < n; j++) {//laco de repeticao para as colunas
		  scanf("%i", &mat[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {//laco de repeticao percorrendo as linhas 
		for (j = 0; j < n; j++) {//pecorrendo as colunas
			printf("%i ", mat[i][j]);
		}
		printf("\n");//pular uma linha
	}

	int somaDP = 0, somaDS = 0;//declacao das variaveis soma da matriz diagonal principal
	// declaracao da soma da matriz diagonal secundaria
	
	//soma diagonal principal
	for (i = 0; i < n; i++) {// laco de repeticao para a somar a matriz diagonal principal
		somaDP += mat[i][i];
	}
	
	//soma diagonal secundária
	for (i = 0; i < n; i++) {// laco de repeticao para a somar a matriz da diagonal secundaria
		somaDS += mat[i][n-i-1];
	}
	
	//soma linhas
	printf("\nSoma das linhas: ");
	int vetL[n];
	for (i = 0; i < n; i++) {// laco de repeticao para somar as lihas 
		vetL[i] = 0;
		for (j = 0; j < n; j++) {
			vetL[i] += mat[i][j];
		}
	}
	for (i = 0; i < n; i++) {//somas das linhas 
		printf("%i ", vetL[i]); 
	}

	//soma colunas
	printf("\nSoma das colunas: ");
	int vetC[n];
	for (j = 0; j < n; j++) {// laco de repeticao para somar as colunas 
		vetC[j] = 0;
		for (i = 0; i < n; i++) {
			vetC[j] += mat[i][j];
		}
	}
	for (i = 0; i < n; i++) {//somas das colunas
		printf("%i ", vetC[i]);
	}
	//imprimindo o resultado da soma diagonal e a soma segundaria
	printf("\nSoma diagonal principal %i e secundária %i\n", somaDP, somaDS);

	int testaL = 1, testaC = 1;//declarando as variaveis
	for (i = 1; i <  n; i++) {//laco de repeticao onde mostra se a matriz e magica ou nao 
		if (vetL[i] != vetL[i-1]) {
			testaL = 0;
			break;
		} else if (vetC[i] != vetC[i-1]) {
			testaC = 0;
			break;
		}
	}
	if (testaL && testaC && somaDP == somaDS && somaDP == vetL[0]) {
		printf("Quadrado magico");
	} else {
		printf("Quadrado nao magico");
	}
	return 0;
}