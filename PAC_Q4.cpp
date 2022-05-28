// PAC_Q4

#include <iostream>
using namespace std;

int main()
{
    string palavra;
    int tamanho;

    cout << "Insira uma string qualquer:\n";
    cin >> palavra;

    tamanho = palavra.length(); // saber o tamanho da string
    
    cout << palavra << " de trás para frente é ";
    for(int i = tamanho - 1; i >= 0; i--)
    {
        cout << palavra[i]; 
    }
    // indice i começa no final da palavra e decrementa em 1 até chegar em 0 e trocar toda a string.
    cout << endl;

    return 0;
}