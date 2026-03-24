#include <iostream>
#include "include/ListaParadas.h"

using namespace std;

int main() {
    ListaParadas rota;
    int opcao;
    string nome;
    int pos;

    do {
        cout << "\n--- MENU ITINERÁRIO ---\n";
        cout << "1. Inserir parada no início\n";
        cout << "2. Inserir parada no fim\n";
        cout << "3. Inserir parada por posição\n";
        cout << "4. Remover primeira parada\n";
        cout << "5. Remover última parada\n";
        cout << "6. Buscar parada por nome\n";
        cout << "7. Listar rota completa (ida)\n";
        cout << "8. Listar rota em ordem inversa\n";
        cout << "9. Contar paradas\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Nome da parada: ";
                cin >> nome;
                rota.inserirInicio(nome);
                break;
            case 2:
                cout << "Nome da parada: ";
                cin >> nome;
                rota.inserirFim(nome);
                break;
            case 3:
                cout << "Nome da parada: ";
                cin >> nome;
                cout << "Posição: ";
                cin >> pos;
                rota.inserirPosicao(nome, pos);
                break;
            case 4:
                rota.removerInicio();
                break;
            case 5:
                rota.removerFim();
                break;
            case 6:
                cout << "Nome da parada: ";
                cin >> nome;
                rota.buscar(nome);
                break;
            case 7:
                rota.listarIda();
                break;
            case 8:
                rota.listarVolta();
                break;
            case 9:
                cout << "Total de paradas: " << rota.contar() << endl;
                break;
        }
    } while(opcao != 0);

    return 0;
}
