#include <iostream>
using namespace std;

/*
    Considere que um caixa eletrônico está abastecido com cédulas de R$1.00, R$2.00, R$5,00, R$10.00 R$20.00 R$50.00 R$100.00.
    Faça um programa que leia um valor (inteiro) a ser sacado por um cliente e exiba a quantidade a ser fornecida de cada cédula 
    considerando que o caixa eletrônico sempre deverá fornecer a menor quantidade total de cédulas possível. Faça uma função que
    receba como parâmetro o valor a ser sacado, calcule e exiba a quantidade a ser fornecida de cada cédula.
*/

void sacar(int valor)
{
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
    while(valor != 0){
        if(valor >= 100){
            valor -= 100;
            cem++;
        }
        else if(valor >= 50){
            valor -= 50;
            cinquenta++;
        }
        else if(valor >= 20){
            valor -= 20;
            vinte++;
        }
        else if(valor >= 10){
            valor -= 10;
            dez++;
        }
        else if(valor >= 5){
            valor -= 5;
            cinco++;
        }
        else if(valor >= 2){
            valor -= 2;
            dois++;
        }
        else if(valor = 1){
            valor -= 1;
            um++;
        }
    }

    if(cem > 0){

    }
    cout << "\nNotas de R$100.00: " << cem << "\nNotas de R$50.00: " << cinquenta << "\nNotas de R$20.00: " << vinte << "\nNotas de R$10.00: " << dez << "\nNotas de R$5.00: " << cinco << "\nNotas de R$2.00: " << dois << "\nNotas de R$1.00: " << um << endl;
    // "O banco libera 2 notas de cem, 1 nota de vinte e 1 uma nota de dez"
}

int main(){
    // ex: a pessoa escreveu 230 reais. ela deve receber 2 x 100, 1 x 20, 1 x 10
    int valor;
    cout << "--------------------\n";
    cout << "     \033[33mBANCO BCC\033[m\n";
    cout << "--------------------\n\n";

    cout << "Insira o valor a ser sacado: ";
    cin >> valor;
    sacar(valor);
}