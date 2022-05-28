// PAC_Q3_P1 - Bianca Gallicchio Tavares

using namespace std;
#include <iostream>

int maiorDivisor(int num)
{
    int divisor;
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            divisor = i;
        }
    }
    return divisor;
}

int main()
{
    int num, divisor;
    cout << "Insira um número inteiro para verificar qual o seu maior divisor:\n";
    cin >> num;

    divisor = maiorDivisor(num);
    cout << "O maior divisor de " << num << " é " << divisor << endl;

    return 0;
}