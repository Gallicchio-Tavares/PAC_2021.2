// PAC Q1

#include <iostream>
using namespace std;

int main()
{
    int num[10];
    
    cout << "Insira 10 numeros inteiros:\n";
    for(int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    
    int maior = num[0]; // começa considerando o primeiro numero como o maior
    
    for(int i = 0; i < 10; i++)
    {
        if(num[i] > maior)
        { 
            maior = num[i];
        }
    }
    cout << "O maior numero é " << maior << endl;;

    return 0;
}