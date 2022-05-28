// media

#include <iostream>

using namespace std;

float maiorElemento(float v[], int n)
{
    float maior;
    for(int i=0; i<n; i++) {
        if(i == 0) {
            maior = v[i];
        } else {
            if(v[i] > maior) {
                maior = v[i];
            }
        }
    }
    return maior;
}

float menorElemento(float v[], int n)
{
    float menor;
    for(int i=0; i<n; i++) {
        if(i == 0) {
            menor = v[i];
        } else {
            if(v[i] < menor) {
                menor = v[i];
            }
        }
    }
    return menor;
}

float calculaMedia(float v[], int n)
{
    float soma = 0;
    for(int i=0; i<n; i++) {
        soma += v[i];
    }
    return soma / n;
}


int main()
{
    int numeroAlunos;
    float media;
    cin >> numeroAlunos;
    float nota[numeroAlunos];
    for(int i=0; i<numeroAlunos; i++) {
        cin >> nota[i];
    }
    media = calculaMedia(nota,numeroAlunos); // O for serve pra passear pelo array e checar algo
    for(int i=0; i<numeroAlunos; i++) {
        if(nota[i]<media) { // algo a ser checado
            cout << nota[i] << " ";
        }
    }
    cout << endl;

    cout << "Maior Nota: " << maiorElemento(nota, numeroAlunos) << endl;
    cout << "Menor Nota: " << menorElemento(nota, numeroAlunos) << endl;
    return 0;
}