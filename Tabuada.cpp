// Tabuada - Q1

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    cout << "TABUADA DO 1 AO 10:\n";

    for(i = 1; i < 10; i++)
    {
        for(j = 0; j < 11; j++)
        {
            cout << i << " x " << j << " = " << i*j << endl;
            
        }
        cout << "----------------\n";
    }

    return 0;
}