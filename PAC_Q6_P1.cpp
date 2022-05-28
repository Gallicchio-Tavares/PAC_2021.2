// PAC_Q6_P1 - Bianca Gallicchio Tavares

using namespace std;
#include <iostream>
#include <cmath>

float misterio(float x0) 
{
    float xn;
    xn = x0;
    float a;
    for(int n=1; n<100; n++)
    {
        a = xn - (((xn * xn) - x0)/ (2.0 * xn));
        xn = a;
    }
    return a;
}

int main()
{
    float x0;
    cout << "Insira um numero real qualquer: \n";
    cin >> x0;

    cout << misterio(x0) << endl;

    /* CONCLUSÃO: essa função misterio retorna as raizes quadradas do numero que o usuario insere.
        x0 = 2 retorna 1.414213 (aproximaçao)
        x0 = 3 retorna 1.73205  (aproximaçao)
        x0 = 4 retorna 2
        x0 = 9 retorna 3
        x0 = 16 retorna 4
        x0 = 25 retorna 5
        x0 = 100 retorna 10
    */
}