#include "ListaParadas.h"
#include <iostream>
using namespace std;

ListaParadas::ListaParadas() {
    inicio = nullptr;
    fim = nullptr;
}

ListaParadas::~ListaParadas() {
    while(inicio) removerInicio();
}

void ListaParadas::inserirInicio(string nome) {
    No* novo = new No{nome, inicio, nullptr};
    if(inicio) inicio->ant = novo;
    inicio = novo;
    if(!fim) fim = novo;
}

void ListaParadas::inserirFim(string nome) {
    No* novo = new No{nome, nullptr, fim};
    if(fim) fim->prox = novo;
    fim = novo;
    if(!inicio) inicio = novo;
}

void ListaParadas::inserirPosicao(string nome, int pos) {
    if(pos <= 1) { inserirInicio(nome); return; }
    No* atual = inicio;
    for(int i=1; atual && i<pos-1; i++) atual = atual->prox;
    if(!atual || !atual->prox) { inserirFim(nome); return; }
    No* novo = new No{nome, atual->prox, atual};
    atual->prox->ant = novo;
    atual->prox = novo;
}

void ListaParadas::removerInicio() {
    if(!inicio) return;
    No* temp = inicio;
    inicio = inicio->prox;
    if(inicio) inicio->ant = nullptr;
    else fim = nullptr;
    delete temp;
}

void ListaParadas::removerFim() {
    if(!fim) return;
    No* temp = fim;
    fim = fim->ant;
    if(fim) fim->prox = nullptr;
    else inicio = nullptr;
    delete temp;
}

void ListaParadas::buscar(string nome) {
    No* atual = inicio;
    while(atual) {
        if(atual->nome.find(nome) != string::npos) {
            cout << "Parada encontrada: " << atual->nome << endl;
            return;
        }
        atual = atual->prox;
    }
    cout << "Parada não encontrada.\n";
}

void ListaParadas::listarIda() {
    No* atual = inicio;
    cout << "Rota (ida): ";
    while(atual) {
        cout << atual->nome << " -> ";
        atual = atual->prox;
    }
    cout << "FIM\n";
}

void ListaParadas::listarVolta() {
    No* atual = fim;
    cout << "Rota (volta): ";
    while(atual) {
        cout << atual->nome << " -> ";
        atual = atual->ant;
    }
    cout << "INÍCIO\n";
}

int ListaParadas::contar() {
    int qtd = 0;
    No* atual = inicio;
    while(atual) {
        qtd++;
        atual = atual->prox;
    }
    return qtd;
}
