// PAC_Q2 

#include <iostream>
using namespace std;

float calcMedia(int vet[])
{
    float soma = 0, media;
    for(int i = 0; i < 10; i++)
    {
        soma += vet[i];
    }
    media = soma/10.0;

    return media;
}

int main()
{
    int num[10], maiores[10], contador = 0;
    float media;
    
    cout << "Insira 10 numeros inteiros:\n";
    for(int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }

    media = calcMedia(num); // calcula a media.

    for(int i = 0; i < 10; i++) // analisando se o numero é maior que a media.
    {
        if(num[0] > media)
        {
            maiores[0] = num [0];
        }
        else
        {
            maiores[0] = __INT_MAX__; // colocando o maior numero possivel.
        }
        if(num[1] > media)
        {
            maiores[1] = num [1];
        }
        else
        {
            maiores[1] = __INT_MAX__;
        }
        if(num[2] > media)
        {
            maiores[2] = num [2];
        }
        else
        {
            maiores[2] = __INT_MAX__;
        }
        if(num[3] > media)
        {
            maiores[3] = num [3];
        }
        else
        {
            maiores[3] = __INT_MAX__;
        }
        if(num[4] > media)
        {
            maiores[4] = num [4];
        }
        else
        {
            maiores[4] = __INT_MAX__;
        }
        if(num[5] > media)
        {
            maiores[5] = num [5];
        }
        else
        {
            maiores[5] = __INT_MAX__;
        }
        if(num[6] > media)
        {
            maiores[6] = num [6];
        }
        else
        {
            maiores[6] = __INT_MAX__;
        }
        if(num[7] > media)
        {
            maiores[7] = num [7];
        }
        else
        {
            maiores[7] = __INT_MAX__;
        }
        if(num[8] > media)
        {
            maiores[8] = num [8];
        }
        else
        {
            maiores[8] = __INT_MAX__;
        }
        if(num[9] > media)
        {
            maiores[9] = num [9];
        }
        else
        {
            maiores[9] = __INT_MAX__;
        }
    }
    int maior = maiores[0];
    
    for(int i = 0; i < 10; i++)
    {
        if(maiores[i] < maior)
        { 
            maior = maiores[i];
        }
    }
    cout << "Média: " << media << endl;
    cout << "O menor número possível que é maior que a média é " << maior << endl;

    return 0;
}