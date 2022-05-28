#include <iostream>  // Bianca Gallicchio Tavares 
using namespace std;

int main()
{
    int data, dia, ano;
    int mes;
    bool validade = false;

    while(validade == false)
    {
        cout << "Insira a data no formato ddmmaaaa: " << endl;
        cin >> data; // ex: 22022022 -> 22/2/2022
        
        dia = data / 1000000;
        ano = data % 10000;
        data = data - ano - dia * 1000000;
        mes = data / 10000 ;

        if(mes > 12 || mes < 1)
        {
            cout << "Data inválida.\n";
        }
        else if(mes == 2) // fevereiro mas não bissexto
        {
            if(dia < 29)
            {
                cout << "Data válida.\n";
                validade = true;
            }
            else if(ano % 400 == 0 && ano % 4 == 0 && ano % 100 == 0)
            {
                if(dia > 29 || dia < 1)
                    {
                        cout << "Data inválida.\n";
                    }
                    else
                    {
                        cout << "Data válida\n";
                        validade = true;
                    }
            }
            else if(ano % 400 == 0 && ano % 4 == 0 && ano % 100 == 0)
            {
                if(dia > 29 || dia < 1)
                    {
                        cout << "Data inválida.\n";
                    }
                    else
                    {
                        cout << "Data válida\n";
                        validade = true;
                    }
            }
            else{
                cout << "Data inválida\n";
            }
        }
        else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) // meses com 31 dias
        {
            if(dia > 31 || dia < 1)
            {
                cout << "Data inválida.\n";
            }
            else
            {
                cout << "Data válida\n";
                validade = true;
            }

        }
        else if(mes == 6 || mes == 4 || mes == 9 || mes == 11)  // meses com 30 dias
        {
            if(dia > 30 || dia < 1)
            {
                cout << "Data inválida.\n";
            }
            else
            {
                cout << "Data válida\n";
                validade = true;
            }

        }
        else
        {
            cout << "Data válida\n";
            validade = true;
        }
        cout << "---------------------\n";
        cout << dia << "/" << mes << "/" << ano << endl;
        cout << "---------------------\n";

    }
    return 0;
}