#include <stdio.h> //biblioteca
#include <stdlib.h>
#include <math.h> //biblioteca para as operacoes matematicas

void somadevetores(int **ma, int **mb, int **mc, int linhas, int colunas)
{//prototipo da funcao 
    int i, j;//declaracao das variaveis
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz ma
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (A): \n", i + 1, j + 1);
            scanf("%d", &ma[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz mb
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (b): \n", i + 1, j + 1);
            scanf("%d", &mb[i][j]);
        }
    }

    for (i = 0; i < linhas; i++)//laco de repeticao para somar matriz ma + matriz mb e alocar em matriz mc
    {
        for (j = 0; j < colunas; j++)
        {

            mc[i][j] = ma[i][j] + mb[i][j];
        }
    }

    printf("\n----MATRIZ A----\n\n");
    for (i = 0; i < linhas; i++)// laco de repeticao para imprimir matriz ma
	    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (A): %d\n", i + 1, j + 1, ma[i][j]);
        }
    }
    printf("\n----MATRIZ B----\n\n");
    for (i = 0; i < linhas; i++)// laco de repeticao para imprimir matriz mb
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (B): %d\n", i + 1, j + 1, mb[i][j]);
        }
    }
    printf("\n----MATRIZ C----\n\n");
    for (i = 0; i < linhas; i++)// laco de repeticao para imprimir matriz mc
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (C): %d\n", i + 1, j + 1, mc[i][j]);
        }
    }
}

void multiolicacaodevetores(int **ma, int **mb, int **mc, int linhas, int colunas)
{//prototipo ta funcao 
    int i, j;//declaracao das variaveis 
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz ma
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (A): \n", i + 1, j + 1);
            scanf("%d", &ma[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz mb
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (B): \n", i + 1, j + 1);
            scanf("%d", &mb[i][j]);
        }
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)//laco de repeticao para multiplicacar matriz ma * matriz mb e alocar em matriz mc
        {

            mc[i][j] = ma[i][j] * mb[i][j];
        }
    }

    printf("\n----MATRIZ A----\n\n");
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz ma
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (A): %d\n", i + 1, j + 1, ma[i][j]);
        }
    }
    printf("\n----MATRIZ B----\n\n");
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz mb
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (B): %d\n", i + 1, j + 1, mb[i][j]);
        }
    }
    printf("\n----MATRIZ C----\n\n");
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz mc
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (C): %d\n", i + 1, j + 1, mc[i][j]);
        }
    }
}

void subtracaodevetores(int **ma, int **mb, int **mc, int linhas, int colunas)
{//prototipo ta funcao 
    int i, j;//declaracao das variaveis 
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz ma
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (A): \n", i + 1, j + 1);
            scanf("%d", &ma[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < linhas; i++)// laco de repeticacao para empreencher a matriz mb
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (B): \n", i + 1, j + 1);
            scanf("%d", &mb[i][j]);
        }
    }

    for (i = 0; i < linhas; i++)//laco de repeticao para subtracao matriz ma - matriz mb e alocar em matriz mc
    {
        for (j = 0; j < colunas; j++)
        {

            mc[i][j] = ma[i][j] - mb[i][j];
        }
    }

    printf("\n----MATRIZ A----\n\n");
    for (i = 0; i < linhas; i++)//laco de repeticao para imprimir a matriz ma 
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (A): %d\n", i + 1, j + 1, ma[i][j]);
        }
    }
    printf("\n----MATRIZ B----\n\n");
    for (i = 0; i < linhas; i++)//laco de repeticao para imprimir a matriz mb
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (B): %d\n", i + 1, j + 1, mb[i][j]);
        }
    }
    printf("\n----MATRIZ C----\n\n");
    for (i = 0; i < linhas; i++)//laco de repeticao para imprimir a matriz mc
    {
        for (j = 0; j < colunas; j++)
        {

            printf("Digite o numero da linha (%d) coluna (%d) Matriz (B): %d\n", i + 1, j + 1, mc[i][j]);
        }
    }
}

int main(void){//funcao principal

    int linhas, colunas, i, j, Escolha;//declaracao das variaveis

    printf("digite a quantidade de linhas da matriz: \n");//solicitar ao usuario a quantidade de linhas
    scanf("%d", &linhas);// ler e guarda o valor na variavel linhas
    printf("digite a quantidade de colunas da matriz: \n");//solicitar ao usuario a quantidade de colunas
    scanf("%d", &colunas);//ler e guarda o valor na variavel colunas

    int **ma = (int **)malloc(linhas * sizeof(int *));//declarando alocacao dinamica matriz ma
    int **mb = (int **)malloc(linhas * sizeof(int *));//declarando alocacao dinamica matriz mb
    int **mc = (int **)malloc(linhas * sizeof(int *));//declarando alocacao dinamica matriz mc

    for (i = 0; i < linhas; i++)
    {//laco de repeticacao para locar a quantidade de coluna

        ma[i] = (int *)malloc(colunas * sizeof(int));
        mb[i] = (int *)malloc(colunas * sizeof(int));
        mc[i] = (int *)malloc(colunas * sizeof(int));
    }

    printf("Para multolicacao de matrizes digite 1.\n");
    printf("Para subtracao de matrizes digite 2.\n");
    printf("Para soma de matrizes digite 3.\n");
    printf("Escolha: \n");
    scanf("%d", &Escolha);
    if (Escolha == 1)//verificando se a escolha do usuario foi 1 
    {
        multiolicacaodevetores(ma, mb, mc, linhas, colunas);//chamada da funcao que multiplica as matrizes
    }
    else if (Escolha == 2)//verificando se a escolha do usuario foi 2
    {
        subtracaodevetores(ma, mb, mc, linhas, colunas);// chamada da funcao que subrair as matrizes
    }
    else if (Escolha == 3)//verificando se a escolha do usuario foi 3
    {
        somadevetores(ma, mb, mc, linhas, colunas);// chamada da funcao que soma as matrizes
    }

   
    for (i = 0; i < linhas; i++) // libera colunas da matriz ma
    {
        for (j = 0; j < colunas; j++)
        {

            free(ma[i]);
        }
    }
    free(ma);//li
    printf("\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {

            free(mb[i]);// libera colunas da matriz mb
        }
    }
    free(mb);
    printf("\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {

            free(mc[i]);// libera colunas da matriz mc
        }
    }
    free(mc);
}