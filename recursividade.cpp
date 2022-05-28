// recursividade com fatorial

#include <iostream>
using namespace std;

int main()
{
    int num, i, fatorial = 1;
    cout << "Insira o numero para achar seu fatorial: ";
    cin >> num;
    if (num< 0)
        cout << "Erro! O fatorial de um numero negativo não existe.\n";
    else
    {
        for(i = 1; i <= num; ++i)
        {
            fatorial*= i;  // fatorial = fatorial*i;
        }
        cout << "O fatorial de " << num << " é " <<  fatorial << endl;
    }
    return 0;
}