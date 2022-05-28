// torre de hanoi

#include <iostream>
using namespace std;

/*
REGRAS:
- Mover um disco por vez.
- Nunca colocar um disco maior em cima de um menor.
Você tem tres pinos. Um de início, um auxiliar e outro de destino.
 -
--- move 1 para C. Move 2 para B. Move 1 para B.
*/
void hanoi(int n, char inicio, char aux, char destino)
{
    if(n == 1) // TRIVIAL: vai só mover a sozinha pro lugar de destino.
    {
        cout << "Mova o disco " << n << " que está em " << inicio << " para a posição " << destino << endl;
        return;
    }
    hanoi(n-1, inicio, destino, aux); // move o do inicio para a auxiliar
    cout << "Mova o disco " << n << " que está em " << inicio << " Para a posição " << destino << endl;
    hanoi(n-1, aux, inicio, destino); // tira da auxiliar e bota no destino
}

/*
Se n = 2, não vai entrar no if. Vai fazer o Hanoi com n-1, movendo a peça menor para a estaca auxiliar (B) (entrou no if). Saiu da recursão. 
Agora, o segundo cout vai agir, movendo a peça final para a estaca destino (C). Por fim, vai fazer dnv Hanoi com n-1, movendo
a peça menor que estava em B para C (entrou no if).
Se n = 3, vai fazer hanoi com n-1 = 2. 
*/

int main()
{
    int n;
    cout << "Insira o número de discos: ";
    cin >> n;

    hanoi(n, 'A', 'B', 'C');

    return 0;
}
