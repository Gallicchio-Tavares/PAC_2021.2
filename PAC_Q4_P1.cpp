// PAC_Q4_P1 - Bianca Gallicchio Tavares

using namespace std;
#include <iostream>

int maiorDivisor(int num);

int primo(int num)
{
    int divisor;
    divisor = maiorDivisor(num);
    if(divisor == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num, resp;
    cout << "Insira um número para verificar se ele é primo: \n";
    cin >> num;
    resp = primo(num);

    cout << resp << endl;

    return 0;
}