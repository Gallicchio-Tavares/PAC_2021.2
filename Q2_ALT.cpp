// Q2_ALT

//ler 10 numeros inteiros e imprimir o MENOR que seja MAIOR que a media dos numeros informados.
#include <iostream>

using namespace std;

int main()
{
    int inteiro[10], i, menor, soma = 0;
    float media;
    
    cout << "por favor, digite 10 numeros inteiros >> ";
    for(i=0; i<10 ;i++)
    {
        cin >> inteiro[i];
        soma += inteiro[i];
    }
    media = soma/10.0;
    cout << media << endl;
    menor = inteiro[0];
    for(i=0;i<10;i++)
    {

        if(inteiro[i] > media)
        {
            if(inteiro[i] < menor)
            {
                menor = inteiro[i];
            }
        }
    }
    cout << "o numero inteiro que e o menor entre os 10 e maior que a media >> " << menor << "\n"; 

    return 0;
}
