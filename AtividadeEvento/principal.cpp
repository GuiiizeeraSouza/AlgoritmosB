#include <iostream>
#include <string>
#include <fstream>
#include <time.h>

#define TAM 50
using namespace std;

#include "./Entidades/struct.h"
#include "metodos.h"

int main() {

    User vetor[TAM];
    inicializar(vetor, TAM);


    menu(vetor, TAM);

    return 1;
}