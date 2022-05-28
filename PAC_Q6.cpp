// PAC_Q6 

#include <iostream>
#include <random>       // random_device e mt19937 
#include <string>       // string
#include <algorithm>    // shuffle
using namespace std;

struct Atleta // definiçao da estrutura;
{
    string nome;
    float peso;
    float altura;
    float IMC;
};

string geraNome()
{
    string str("abcdefghijlmnoprstuvz");
    random_device rd;
    mt19937 gerador(rd());

    shuffle(str.begin(), str.end(), gerador);

    return str.substr(0, 7);    // numero de caracteres max é 7
}

int geraPeso() // considerando peso em quilos
{
    string str("456789"); // sem valores muito pequenos para gerar um peso realista
    int num;
    random_device rd;
    mt19937 gerador(rd());

    shuffle(str.begin(), str.end(), gerador);
    num = stoi(str.substr(0, 2)); // numero de caracteres max é 2, para gerar um peso realista.
    return num;                   // stoi(), ou seja, "string to int", transforma uma string em int
}

int geraAltura() // considerando altura em centimetros
{
    string str("3456789");
    int num;
    random_device rd;
    mt19937 gerador(rd());

    shuffle(str.begin(), str.end(), gerador);
    num = stoi(str.substr(0, 2)); 
    return 100 + num;     // ex: numero deu 65. logo, a pessoa vai ter 165 cm de altura.
}

float calcIMC(float peso, float altura)
{
    float imc;
    imc = peso / (altura * altura) * 10000; // o *10000 é uma conversão de cm para metros. Fica: kg/m²
    return imc;
}

int main()
{
    Atleta atl[100];
    for(int i = 0; i < 100; i++)
    {
        atl[i].nome = geraNome();
        atl[i].peso = geraPeso();
        atl[i].altura = geraAltura();
        atl[i].IMC = calcIMC(atl[i].peso, atl[i].altura);
        cout << "IMC do atleta " << atl[i].nome << ": " << atl[i].IMC << endl;
        cout << "(Peso " << atl[i].peso << "kg e altura " << atl[i].altura << "cm).\n";
        cout << "-------------------------------\n";
    }

}