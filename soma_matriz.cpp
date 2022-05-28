#include <iostream>
using namespace std;
#define m 4
#define n 5
//soma de cada linha
void calcLin(int arr[m][n])
{
   int i, j, soma = 0;
   for (i = 0; i < m; ++i) // linha
   {
      for (j = 0; j < n; ++j) // coluna
      {
         soma = soma + arr[i][j]; // faz [0][0] + [0][1] + [0][2] + [0][3], [1][0] +[1][1] + ... e assim por diante
      }
      cout << "Soma da linha "<< i+1 << ": " << soma << endl;
      soma = 0; // zerar a soma toda vez que desce pra próx linha
   }
}
//Soma de cada coluna
void calcCol(int arr[m][n]) 
{
   int i, j, soma = 0;
   for (i = 0; i < n; ++i) 
   {
      for (j = 0; j < m; ++j) 
      {
         soma = soma + arr[j][i]; // !!! [j][i]
      }
      cout << "Soma da coluna "<< i+1 << ": " << soma << endl;
      soma = 0;
   }
}
int main() 
{
   int i,j;
   int arr[m][n];
   int x = 10;
   for (i = 0; i < m; i++) 
   {
      cout << " |  ";
      for (j = 0; j < n; j++) 
      {
         arr[i][j] = x++;
         cout << arr[i][j] << " ";
      }
      cout << " | \n";
   }
   cout << endl;
   calcLin(arr);
   cout << endl;
   calcCol(arr);

   return 0;
}
