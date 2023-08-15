#include <stdio.h>
#include <string>
#include <locale>
#define TAM 5
using namespace std;

typedef struct
{
    string origem;
    string destino;
    string Saida;
    string diaPartida;
    int asssento;
    float passagem;
    float seguro;

} Linha;

int main()
{

    Linha onibusA[TAM];

    for (int i; i < TAM; i++)
    {
        onibusA[i].origem = "Santa Maria";
        onibusA[i].asssento = 42;
        onibusA[i].passagem = 343.22;
    }
}