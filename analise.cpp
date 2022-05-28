//analise

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ordena(int vet[], int n)
{
    for(int inicio = 0; inicio<n-1; inicio++)
    {
        int indiceMenor = inicio;
        for(int i=inicio+1; i<n; i++)
        {
            if(vet[i] < vet[indiceMenor]) 
            {
                indiceMenor = i;
            }
        }
        if(indiceMenor != inicio) 
        {
            int aux = vet[inicio];
            vet[inicio] = vet[indiceMenor];
            vet[indiceMenor] = aux;
        }
        cout << vet[inicio] << endl;
    }
}

int soma(int vet[], int n)
{
    int soma = 0;
    for(int i=0; i<n; i++)
    {
        soma += vet[i];
    }
    return soma;
}

float media(int vet[], int n)
{
    return 1.0*soma(vet,n) / n;
}

float mediana(int vet[], int n) {
    ordena(vet,n);
    if(n%2==0) {
        return (vet[n/2] + vet[n/2-1])/2.0;
    } else{
        return vet[n/2];
    }
}

int moda(int vet[], int n)
{
    int moda=0, repeteModa=0, atual=0, repeteAtual=0;
    ordena(vet,n);
    atual = vet[0];
    repeteAtual = 1;
    for(int i=1; i<n; i++)
    {
        if(vet[i] == atual)
        {
            repeteAtual++;
        }
        else
        {
            if(repeteAtual >= repeteModa) 
            {
                repeteModa = repeteAtual;
                moda = atual;
            }
            atual = vet[i];
            repeteAtual = 1;
        }
    }
    if(repeteAtual >= repeteModa) 
    {
        repeteModa = repeteAtual;
        moda = atual;
    }
    return moda;
}

void imprimeFrequencias(int vet[], int n) {
    int atual, contador;
    atual = vet[0];
    contador = 1;
    for(int i=1; i<n; i++) {
        if(vet[i] == atual) {
            contador++;
        }
        else {
            cout << atual << " " << contador << "X " << endl;
            atual = vet[i];
            contador = 1;
        }
    }
    cout << atual << " " << contador << "X " << endl;
}

void removeDuplicados(int vet[], int n) {
    ordena(vet,n);
    int indiceAtual = 0;
    for(int i=1; i<n; i++)
    {
        if(vet[i] != vet[indiceAtual]) {
            indiceAtual++;
            vet[indiceAtual] = vet[i];
        }
    }
    for(int i=indiceAtual+1; i<n; i++) {
        vet[i] = 0;
    }
}

void sorteiaElementos(int vet[], int n) 
{
    srand (time(NULL)); // Iniciar o gerador de numeros aleatorios
    for(int i=0; i<n; i++) {
        vet[i] = rand()%10;
    }
}

void imprimeVetor(int vet[], int n) {
    for(int i=0; i<n; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 5, 12, 21, 6, 5, 2, 9, 10, 11};
    int n = 10;

    ordena(arr, n);
}