/*
MENU:
1) Cadastrar:
    - nome
    - sigla 
    - valor em dolar

2) Atualizar:
    - sigla -> atualizar a unidade

3) Remover:
    - sigla

4) Listar:

5) Sair:

*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>
using namespace std;

#include "StructsCRIPTO.h"

#include "MetodosCRIPTO.h"

int main() {
    Cripto *vetor;
    int totalInscritos = conexaoBanco(vetor);
    
    menu(vetor, &totalInscritos);
    return 1;
}