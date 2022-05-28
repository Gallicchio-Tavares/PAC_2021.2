// PAC_Q8 

#include <iostream>
using namespace std;

int main()
{
    int matriz[10][10] = { // exemplo qualquer
                            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                            {1, 0, 1, 2, 3, 4, 5, 6, 7, 8},// 2,9
                            {2, 1, 0, 1, 2, 3, 4, 5, 6, 7},
                            {3, 2, 1, 0, 1, 2, 3, 4, 5, 6},
                            {4, 3, 2, 1, 0, 1, 2, 3, 4, 5},
                            {5, 4, 3, 2, 1, 0, 1, 2, 3, 4},
                            {6, 5, 4, 3, 2, 1, 0, 1, 2, 3},
                            {7, 6, 5, 4, 3, 2, 1, 0, 1, 2},
                            {8, 7, 6, 5, 4, 3, 2, 1, 0, 1},
                            {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}
                            // 9,2
    };
    // cout << matriz[0][1] << endl; // linha 0, coluna 1.
    
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
    
    int contador = 0;
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(matriz[i][j] == matriz[j][i])
            {
                contador++; // vai contar quantas vezes aparecem iguais
            }
        }
    }
    if(contador == 100) // se todos foram iguais, é transposta.
    {
        cout << "é transposta.\n";
    }
    else
    {
        cout << "não é transposta.\n";
    }
}