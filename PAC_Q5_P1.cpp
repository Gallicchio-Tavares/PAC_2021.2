// PAC_Q5_P1 - Bianca Gallicchio Tavares

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
   int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
   int verifica1, verifica2, verifica3, verifica4, verifica5, verifica6, verifica7, verifica8, verifica9, verifica10;

   cout << "Insira dez numeros inteiros:\n";
   cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

    verifica1 = maiorDivisor(n1); 
    verifica2 = maiorDivisor(n2);
    verifica3 = maiorDivisor(n3);
    verifica4 = maiorDivisor(n4);
    verifica5 = maiorDivisor(n5);
    verifica6 = maiorDivisor(n6);
    verifica7 = maiorDivisor(n7);
    verifica8 = maiorDivisor(n8);
    verifica9 = maiorDivisor(n9);
    verifica10 = maiorDivisor(n10);

    if(verifica1 != 1)
    {
        n1 = 0;
    }
    if(verifica2 != 1)
    {
        n2 = 0;
    }
    if(verifica3 != 1)
    {
        n3 = 0;
    }
    if(verifica4 != 1)
    {
        n4 = 0;
    }
    if(verifica5 != 1)
    {
        n5 = 0;
    }
    if(verifica6 != 1)
    {
        n6 = 0;
    }
    if(verifica7 != 1)
    {
        n7 = 0;
    }
    if(verifica8 != 1)
    {
        n8 = 0;
    }
    if(verifica9 != 1)
    {
        n9 = 0;
    }
    if(verifica10 != 1)
    {
        n10 = 0;
    }
    cout << "A soma dos numeros primos desse conjunto é " << n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 << endl;

    return 0;
}