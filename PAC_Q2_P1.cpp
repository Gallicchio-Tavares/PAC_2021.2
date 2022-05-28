// PAC_Q2_P1 - Bianca Gallicchio Tavares

#include <iostream>
using namespace std;
#define m 1000 // numero suficientemente grande
#define o 4

void calcSoma(int arr[m][o], int n) 
{
   int i,j,soma = 0;
   for (i = 2; i < 4; ++i) {
      for (j = 0; j < n; ++j) {
         soma = soma + arr[j][i];
      }
      if(i == 2)
      {
          cout << "Total de pessoas do sexo feminino vacinadas: " << soma << endl;
      }
      else if(i == 3)
      {
          cout << "Total de pessoas do sexo masculino vacinadas: " << soma << endl;
      }
      soma = 0;
   }
}
void calcMes(int arr[m][o], int n)
{
   int i,j,soma = 0;
   for (i = 0; i < n; ++i) {
      for (j = 2; j < 4; ++j) {
         soma = soma + arr[i][j];
      }
      cout << "Total de pessoas vacinadas por mês na linha " << i + 1 << ": " << soma << endl;
      soma = 0;
   }
}

int main()
{
    int n, mes;
    cout << "Insira o número de ocorrências a serem inseridas:\n";
    cin >> n;
    int ocorrencias[n][4]; // funciona como uma matriz
    cout << "Insira mês, ano, pessoas do sexo feminino e pessoas do sexo masculino:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> ocorrencias[i][j];
        }
    }

    calcSoma(ocorrencias, n);
    cout << "------------------------------------------------" << endl;
    calcMes(ocorrencias, n);

    return 0;
}