#include <iostream>
using namespace std;
#define m 7
#define n 6
//calculating sum of each row
void calcMes(int arr[m][n]){
   int i,j,soma = 0;
   for (i = 0; i < 4; ++i) {
      for (j = 0; j < 4; ++j) {
         soma = soma + arr[i][j];
      }
      cout << "Soma "<< i << ": " << soma << endl;
      soma = 0;
   }
}
//calculating sum of each column
void calc_csum(int arr[m][n]) {
   int i,j,sum = 0;
   for (i = 0; i < 4; ++i) {
      for (j = 0; j < 4; ++j) {
         sum = sum + arr[j][i];
      }
      cout << "Sum of the column "<< i << ": " << sum <<endl;
      sum = 0;
   }
}
int main() {
   int i,j;
   int arr[m][n];
   int x = 1;
   for (i = 0; i < m; i++)
   for (j = 0; j < n; j++)
   arr[i][j] = x++;
   calcMes(arr);
   calc_csum(arr);
   return 0;
}