// PAC_Q3 

#include <iostream>
using namespace std;

int main()
{
    string numero;
    
    cout << "Insira a string:\n";
    cin >> numero;
    if(numero.length() > 40)
    {
        cout << "String muito longa! Tente novamente.\n";
        cin >> numero;
    }

    cout << "A quantidade de dígitos desse número é de " << numero.length() << endl;

    return 0;
}