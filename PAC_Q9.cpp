// PAC_Q9

#include <iostream>
using namespace std;

int main()
{
    int matriz[10][10] = { // exemplo qualquer
                            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},// 2,9
                            {0, 0, 1, 0, 0, 0, 0, 0, 3, 0}, // i,j
                            {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                            {0, 0, 0, 9, 0, 0, 0, 0, 1, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}
                            // 9,2
    };

    cout << "A matriz\n";
    for(int i = 0; i < 10; i++) 
    {
        cout << "|  ";
        for(int j = 0; j < 10; j++)
        {
            cout << matriz[i][j];
            cout << " ";
        }
        cout << " |";
        cout << endl;
    }

    int contador1 = 0, contador2 = 0;

    for(int i = 0; i < 10; i++) // verificar se acima da diagonal principal é = 0. Caso 1
    {
        for(int j = i+1; j < 10; j++)
        {
            if(matriz[i][j] == 0)
            {
                contador1++;
            }
        }
    }
    for(int i = 0; i < 10; i++) // verificar se abaixo da diagonal principal é = 0. Caso 2
    {
        for(int j = 0; j < i; j++)
        {
            if(matriz[i][j] == 0)
            {
                contador2++;
            }
        }
    }
    if(contador1 == 45 || contador2 == 45) // se TODOS os elementos abaixo OU acima da diagonal principal forem = 0.
    {
        cout << "é triangular.\n";
    }
    else
    {
        cout << "não é triangular.\n";
    }
}
