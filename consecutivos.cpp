#include <iostream>

// 10 5 2 2 3 4 4 4 4 1 1
// 10 1 2 3 4 5 6 7 8 9 10
// 10 5 5 5 5 5 5 5 5 5 5

using namespace std;

int main() {
    int n; // Numero total de valores da sequencia.
    int i = 0; // Contador Começa com 0 e em cada passo soma 1.
    int anterior; // Numero Lido na rodada anterior
    int atual; // Numero da rodada atual
    int contadorSequencias = 0; // Conta quantas sequencias consecutivas existem.
    cin >> n;
    while(i<n) {
        cin >> atual;
        if(i==0) {
            contadorSequencias++;
        } else {
            if(atual != anterior) {
                contadorSequencias++;
            }
        }
        anterior = atual;
        i++; // <- Aqui soma 1
    }
    cout << contadorSequencias << endl;
    return 0;
}