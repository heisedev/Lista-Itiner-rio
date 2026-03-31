#ifndef LISTAPARADAS_H
#define LISTAPARADAS_H

#include <string>
using namespace std;

struct No {
    string nome;
    No* prox;
    No* ant;
};

class ListaParadas {
private:
    No* inicio;
    No* fim;
public:
    ListaParadas();
    ~ListaParadas();
    void inserirInicio(string nome);
    void inserirFim(string nome);
    void inserirPosicao(string nome, int pos);
    void removerInicio();
    void removerFim();
    void buscar(string nome);
    void listarIda();
    void listarVolta();
    int contar();
};

#endif
