// PAC_Q7/*

#include <iostream>
using namespace std;

int main()
{
    int quant;
    string palavras[10]; // numero suficientemente grande

    cout << "Quantas palavras serão digitadas? ";
    cin >> quant;

    cout << "Insira as palavras: ";
    for(int i = 0; i < quant; i++)
    {
        cin >> palavras[i];
    }
    
    int menor = palavras[0].length(); // o menor comprimento, começa admitindo que a primeira é menor.
    string conc = palavras[0]; // conclusão, começa admitindo que a primeira é a menor.

    for(int i = 0; i < quant; i++)
    {
        if(palavras[i].length() < menor)
        {
            menor = palavras[i].length();
            conc = palavras[i];
        }
    }
    cout << "A menor palavra é '" << conc << "', que possui " << menor << " letras." << endl;
}