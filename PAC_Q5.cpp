// PAC_Q5 

#include <iostream>
using namespace std;

struct Aluno // estrutura do aluno.
{
    string nome;
    float p1;
    float p2;
    float media;
    string situacao;
};
float calcMedia(float p1, float p2)
{
    float media;
    media = (p1 + p2)/2;
    return media;
}
string calcSituacao(float media, float p1, float p2)
{
    string situacao;
    media = calcMedia(p1, p2);
    if(media < 6)
    {
        situacao = "REPROVADO";
    }
    else 
    {
        situacao = "APROVADO";
    }
    return situacao;
}

int main()
{
    Aluno aluno[100]; //vetor com 100 alunos
    // criando exemplo com 6 alunos
    
    aluno[0].nome = "Alice";
    aluno[0].p1 = 6.0;
    aluno[0].p2 = 7.7;
    aluno[0].media = calcMedia(aluno[0].p1, aluno[0].p2);
    aluno[0].situacao = calcSituacao(aluno[0].media, aluno[0].p1, aluno[0].p2);

    aluno[1].nome = "Jorge";
    aluno[1].p1 = 6.5;
    aluno[1].p2 = 9.1;
    aluno[1].media = calcMedia(aluno[1].p1, aluno[1].p2);
    aluno[1].situacao = calcSituacao(aluno[1].media, aluno[1].p1, aluno[1].p2);

    aluno[2].nome = "Tatiana";
    aluno[2].p1 = 10.0;
    aluno[2].p2 = 9.5;
    aluno[2].media = calcMedia(aluno[2].p1, aluno[2].p2);
    aluno[2].situacao = calcSituacao(aluno[2].media, aluno[2].p1, aluno[2].p2);

    aluno[3].nome = "Alex";
    aluno[3].p1 = 8.2;
    aluno[3].p2 = 6.7;
    aluno[3].media = calcMedia(aluno[3].p1, aluno[3].p2);
    aluno[3].situacao = calcSituacao(aluno[3].media, aluno[3].p1, aluno[3].p2);

    aluno[4].nome = "Juliana";
    aluno[4].p1 = 9.0;
    aluno[4].p2 = 9.0;
    aluno[4].media = calcMedia(aluno[4].p1, aluno[4].p2);
    aluno[4].situacao = calcSituacao(aluno[4].media, aluno[4].p1, aluno[4].p2);

    aluno[5].nome = "Fernando";
    aluno[5].p1 = 5.5;
    aluno[5].p2 = 6.7;
    aluno[5].media = calcMedia(aluno[5].p1, aluno[5].p2);
    aluno[5].situacao = calcSituacao(aluno[5].media, aluno[5].p1, aluno[5].p2);

    return 0;
}