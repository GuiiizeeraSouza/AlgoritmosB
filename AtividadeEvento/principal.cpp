#include <iostream>
#include <string>
#include <time.h>
#define TAM 50
using namespace std;

#include "struct.h"

#include "metodos.h"

int main() {
    Participante vetor[TAM];
    int totalInscritos = conectarBase(vetor,TAM);

    Entrada vetor1[TAM];
    int totalEntradas = conectarBaseEntrada(vetor1,TAM);

    menu(vetor, vetor1, TAM, totalInscritos, totalEntradas);   
    return 1;
}