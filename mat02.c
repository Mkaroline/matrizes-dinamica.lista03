#include <stdio.h> //biblioteca
#include <stdlib.h>
#include <math.h> //biblioteca para as operacoes matematicas

int conferematriz(int **v, int linhas, int colunas, int num)//prototipo da funcao 
{
    int i, j;//declaracao da variaveis

    for (i = 0; i < linhas; i++){// laco de repeticao preencher a matriz 
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d): ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
        }
    }
    printf("\n----Matriz----\n\n");
    for (i = 0; i < linhas; i++)// laco de repeticao para imprimir a matriz
    {
        for (j = 0; j < colunas; j++)
        {

            if (v[i][j] != num)// if para adicionar parenteses no numero que o usuario pediu para verificar se esta na matriz
            {
                printf(" %i ", v[i][j]);
            }
            else if (v[i][j] == num)
            {
                printf("(%i)", v[i][j]);
            }
        }
        printf("\n");
    }

    for (i = 0; i < linhas; i++)// laco de repeticao para verificar se o numero esta na matriz 
    {
        for (j = 0; j < colunas; j++)
        {

            if (v[i][j] == num)
            {

                return 1;
            }
        }
    }

    
}

int main(void){//funcao principal
    system("cls");//limpar terminal
    int i, linhas, colunas, num, retorno;//declaracao das variaveis

    printf("Digite a quantidade de linhas: \n");//pedir ao usuario digitar a quantidade de linhas
    scanf("%d", &linhas);// ler e guarda o valor na variavel linha
    printf("Digite a quantidade de colunas: \n");//pedir ao usuario digitar a quantidade de coluna
    scanf("%d", &colunas);
    printf("Digite um numero para verificar se esta na matriz: \n");
    scanf("%d", &num);

    int **v = (int **)malloc(linhas * sizeof(int *));// alocacao dinamica para adicionar a quantidade de linha para matriz

    for (i = 0; i < linhas; i++)//laco de repeticao serve para alocar a quantidade de colunas da matriz
    {

        v[i] = (int *)malloc(colunas * sizeof(int));
    }

    retorno = conferematriz(v, linhas, colunas, num);// chamada da funcao

    if (retorno == 1)//verificar se o retorno da funcao foi 1
    {

        printf("O numero esta na matriz\n");
    }
    else if (retorno == 0)//verificar se o retorno da funcao foi 0
    {
        printf("\nO numero nao esta na matriz\n");
    }

    for (i = 0; i < linhas; i++)// laco de repeticao para liberar o espaco alocado da matriz 
    {

        free(v[i]);// liberar o espaco da matriz 
    }
    free(v);

    return 0;
}