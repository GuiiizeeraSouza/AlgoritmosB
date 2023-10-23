#include <fstream>
#include "UtilCRIPTO.h"

int conexaoBanco(Cripto *vetor)
{
    ifstream procuradorArquivo;
    int totalInscritos = 0;

    procuradorArquivo.open("moedas.csv");

    if (!procuradorArquivo)
    {
        return totalInscritos;
    }

    string linha;
    while (!procuradorArquivo.eof())
    {
        totalInscritos++;
    }

    procuradorArquivo.close();

    vetor = (Cripto *)malloc(sizeof(Cripto) * (totalInscritos+100));

    for (int i = 0; i < totalInscritos+100; i++)
    {
        vetor[i].nome = "";
        vetor[i].sigla = "";
        vetor[i].valor = "";
    }

    procuradorArquivo.open("moedas.csv");

    while (!procuradorArquivo.eof())
    {
        getline(procuradorArquivo, linha); // lendo a linha inteira
        string *vetor_linha;
        split(vetor_linha, linha, ";");

        vetor[totalInscritos].nome = vetor_linha[0];
        vetor[totalInscritos].sigla = vetor_linha[1];
        vetor[totalInscritos].valor = vetor_linha[2];
    }

    procuradorArquivo.close();
    
    return totalInscritos;
}

bool CriptoJaInscrito(string nome, Cripto *vetor, int *n)
{
    for (int i = 0; i < *n; i++)
    {
        if (vetor[i].nome == nome)
        {
            return true;
        }
    }
    return false;
}

void adicionarCripto(Cripto *vetor, int *n)
{
    string nome; 
    
    cout << "Nome da criptomoeda: ";
    getline(cin,nome);

    //validar se ja inscrito
    CriptoJaInscrito;

    vetor[*n].nome = nome;
    cout << "Sigla da criptomoeda: ";
    cin >> vetor[*n].sigla;

    cout << "Valor em $: ";
    cin >> vetor[*n].valor;
    *n = *n + 1;


}

void atualizarCripto(Cripto *vetor, int *n)
{
    string nomeMoeda;
    cout << "Digite o nome da moeda que deseja atualizar: ";
    cin.ignore();
    getline(cin, nomeMoeda);

    bool encontrou = false;

    for (int i = 0; i < *n; i++)
    {
        if (vetor[i].nome == nomeMoeda)
        {
            cout << "Digite os novos detalhes da moeda " << vetor[i].nome << ":" << endl;
            cout << "Nova sigla: ";
            cin >> vetor[i].sigla;
            cout << "Novo valor: ";
            cin >> vetor[i].valor;
            encontrou = true;
            cout << "Moeda atualizada com sucesso!" << endl;
            break;
        }
    }

    if (!encontrou)
    {
        cout << "Moeda não encontrada." << endl;
    }
}



void removerCripto(Cripto *vetor, int *n)
{
    string nomeMoeda;
    cout << "Digite o nome da moeda que deseja remover: ";
    cin.ignore();
    getline(cin, nomeMoeda);

    int indiceParaRemover = -1;

    for (int i = 0; i < *n; i++)
    {
        if (vetor[i].nome == nomeMoeda)
        {
            indiceParaRemover = i;
            break;
        }
    }

    if (indiceParaRemover != -1)
    {
        for (int i = indiceParaRemover; i < *n - 1; i++)
        {
            vetor[i] = vetor[i + 1];
        }
        n--; 
        cout << "Moeda removida com sucesso!" << endl;
    }
    else
    {
        cout << "Moeda não encontrada." << endl;
    }
}

void listarCriptos(const Cripto *vetor, int &n)
{
    if (n == 0)
    {
        cout << "Não há moedas para listar." << endl;
    }
    else
    {
        cout << "Lista de Moedas:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Nome: " << vetor[i].nome << endl;
            cout << "Sigla: " << vetor[i].sigla << endl;
            cout << "Valor: " << vetor[i].valor << endl;
            cout << "---------------------------" << endl;
        }
    }
}


void menu(Cripto *vetor, int *n)
{
    int opcao;
    do
    {
        system("cls");
        cout << "MENU CRIPTO MOEDA" << endl;
        cout << "1) Adicionar Moeda\n";
        cout << "2) Atualizar Moeda\n";
        cout << "3) Remover Moeda\n";
        cout << "4) Listar Moedas\n";
        cout << "5) Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            // Adicionar Moeda
            cout << "Adicionar Moeda:\n";
            adicionarCripto(vetor, n);
            break;
        case 2:
            // Atualizar Moeda
            cout << "Atualizar Moeda:\n";
            atualizarCripto(vetor, n);
            break;
        case 3:
            // Remover Moeda
            cout << "Remover Moeda:\n";
            removerCripto(vetor, n);
            break;
        case 4:
            // Listar Moedas
            cout << "Listar Moedas:\n";
            listarCriptos(vetor, *n);
            break;
        case 5:
            exit(1);
        default:
            cout << "Opcao invalida\n";
            break;
        }

        system("pause");
    } while (true);
}

