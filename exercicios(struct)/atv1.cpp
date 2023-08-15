/**
 * Escreva um programa que faça o controle das informações relativas aos funcionários de uma determinada empresa.
 * As informações que devem ser armazenadas são: NOME, SALÁRIO, CARGO, IDADE e SEXO.
 * Defina a estrutura de dados e faça a leitura e exibição dos dados para um funcionário.
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct
{

    char NOME[100];
    float SALARIO;
    char CARGO[100];
    int IDADE;
    char SEXO;
} Funcionario;

int main()
{

    Funcionario umFuncionario;

    cout << "Nome do funcionario: \n";
    std::cin >> umFuncionario.NOME;

    cout << "Salário do funcionario: \n";
    std::cin >> umFuncionario.SALARIO;

    cout << "Cargo do funcionario: \n";
    std::cin >> umFuncionario.CARGO;

    cout << "Idade do funcionario: \n";
    std::cin >> umFuncionario.IDADE;

    cout << "Sexo do funcionario [M/F]: \n";
    std::cin >> umFuncionario.SEXO;

    cout << "Exibindo dados dos funcionario \n";
    cout << "Nome do Funcionario: \n" << umFuncionario.NOME << "\nCargo:" << umFuncionario.CARGO; 
}