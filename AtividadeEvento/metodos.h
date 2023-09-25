#include "./Entidades/struct.h"
#include "./util.h/util.h"
#include "metodos.h"


void menu()
{
    do
    {
        system("cls");
        cout << "MENU:" << endl;
        cout << "1 - Inscrever em Evento: \n";
        cout << "2 - Listar inscritos: \n";
        cout << "3 - Registrar entrada: \n";
        cout << "4 - Registrar saida: \n";
        cout << "5 - Sair: \n";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Increver em envento:\n";
            inscricao(vetor, n);
             break;
        case 2:
            cout << "Listar inscritor:\n"; break;

        case 3:
            cout << "Registrar entrada:\n";
             break;

        case 4:
            cout << "Registar saida:\n";
             break;

        
        case 5:
            cout << "Sair:\n";
             break;

        default:
            break;
        }

        system("pause");
    } while (true);
}

void inicializar(Participante vetor[], int n) {
    for (int i = 0; i < n; i++) {
        vetor[i].matricula = "";
        vetor[i].nome = "";
        vetor[i].email = "";
    }
}

void inscricao(User vetor[], int n) {
    string matricula;
    string nome;
    string email;

    cout << "Informe matricula: ";
    cin >> matricula;

    if (jaInscrito(matricula, vetor, n))
    {
        cout << "Esta matriula ja esta inscrita no evento\n";
        return;
    }else{

    }
}