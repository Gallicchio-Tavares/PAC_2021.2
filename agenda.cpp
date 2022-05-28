// agenda

#include <iostream>
#define N 1000 // na minha agenda cabem mil contatos.
using namespace std;

struct Contato // criando os parametros que um contato possui.
{
    string nome;
    string email;
    string telefone;
};

Contato agenda[N]; // Contato é um tipo. vetor de contatos.
int qt = 0; // quantidade de contatos cadastrados na agenda. no inicio do programa, a agenda vai estar vazia.
// variaveis declaradas fora de funções têm vida independente.

void cadastrarContato()
{
    Contato novoContato;

    if(qt < N) // se exceder o numero maximo, não vai poder adicionar contatos novos
    {
        cout << endl;
        cout << "Cadastrar Contato " << endl;
        cout << endl;
        cout << "Nome: ";
        cin >> novoContato.nome;
        cout << "Email: ";
        cin >> novoContato.email;
        cout << "Telefone: ";
        cin >> novoContato.telefone;
        agenda[qt] = novoContato;
        qt++; // aqui vai aumentar em 1 toda vez que eu adicionar um novo contato.
    }
    else
    {
        cout << "Memória Cheia" << endl;
    }
}

void alterarContato()
{
    cout << endl;
    cout << "Alterar Contato" << endl;
    cout << endl;
}

void listarContatos()
{
    cout << endl;
    cout << "Listar Contatos" << endl;
    cout << endl;
    if(qt == 0)
    {
        cout << "Lista Vazia" << endl;
    }
    else
    {
        for(int i=0; i<qt; i++) // imprime todo mundo. acessando cada indice.
        {
            cout << i << " "; // mostra qual o indice de determinado contato
            cout << agenda[i].nome << " ";
            cout << agenda[i].telefone << " ";
            cout << agenda[i].email << endl;
        }
    }
}

void deletarContato()
{
    int d;
    cout << endl;
    cout << "Deletar Contato" << endl;
    cout << endl;
    cout << "Qual indice? ";
    cin >> d; // o indice começa em 0;
    if(d>=0 && d<qt)
    {
        for(int i=d+1; i<qt; i++) // tem que colocar o elemento depois do deletado na posição dele. mover o array. 
        {
            agenda[i-1] = agenda[i]; // ex: se d=2, a partir de d=3, os elementos vão ter o indice diminuido em 1. o 3 passa a ser o 2, o 4 passa a ser o 3 e assim sucessivamente.    
        }
        qt--; // ao deletar um elemento, a quantidade de contatos diminiui em 1, obviamente.
    }
    else
    {
        cout << "Indice não existe" << endl;
    }
}

void ordenarContatos()
{
    cout << endl;
    cout << "Ordenar Contatos" << endl;
    cout << endl;
    
    for(int inicio = 0; inicio < qt-1; inicio++)
    {
        int indiceMenor = inicio;
        for(int i = inicio+1; i < qt; i++)
        {
            if(agenda[i] < agenda[indiceMenor])
            {
                indiceMenor = i;
            }
        }
        if(indiceMenor != inicio)
        {
            int aux = agenda[inicio];
            agenda[indiceMenor] = aux;
        }
    }
}

void buscarNome()
{
    string nome;
    cout << "Buscar Nome" << endl;
    cin >> nome;
    for(int i = 0; i < qt; i++)
    {
        if(agenda[i].nome == nome)
        {
            cout << i << " - "; // mostra qual o indice de determinado contato
            cout << agenda[i].nome << " | ";
            cout << agenda[i].telefone << " | ";
            cout << agenda[i].email << endl;
        }
    }
}

void listarInicialNome()
{
    char inicial;
    cout << "Listar Inicial Nome" << endl;
    cin >> inicial;
    for(int i = 0; i < qt; i++)
    {
        if(agenda[i].nome[0] == inicial) // verificar se determinado contato tem a primeira letra igual a "inicial".
        {
            cout << i << " - "; // mostra qual o indice de determinado contato
            cout << agenda[i].nome << " | ";
            cout << agenda[i].telefone << " | ";
            cout << agenda[i].email << endl;
        }
    }
}

int main()
{
    int opcao = 1;

    while(opcao != 0)
    {
        cout << "MENU DE OPÇÕES" << endl;
        cout << "==============" << endl;
        cout << "(1) Cadastrar Contato" << endl;
        cout << "(2) Alterar Contato" << endl;
        cout << "(3) Listar Contatos" << endl;
        cout << "(4) Deletar Contato" << endl;
        cout << "(5) Ordenar Contatos" << endl;
        cout << "(6) Buscar Por Nome" << endl;
        cout << "(7) Listar Por Inicial do Nome" << endl;
        cout << "(0) Sair do Programa" << endl;
        cout << "Sua Opção: ";
        cin >> opcao;

        switch(opcao) // switchs são similares ao if/else, mas mais simples.
        {
            case 0:
                break;
            case 1:
                cadastrarContato();
                break;
            case 2:
                alterarContato();
                break;
            case 3:
                listarContatos();
                break;
            case 4:
                deletarContato();
                break;
            case 5:
                ordenarContatos();
                break;
            case 6:
                buscarNome();
                break;
            case 7:
                listarInicialNome();
                break;            
            default:
                cout << "Opção Inválida" << endl;
        }
    }
    return 0;
}