int main() {
    ListaParadas rota;
    rota.inserirInicio("Terminal");
    rota.inserirFim("Shopping");
    rota.inserirPosicao("Praça Central", 2);

    rota.listarIda();
    rota.listarVolta();

    rota.buscar("Praça");
    cout << "Total de paradas: " << rota.contar() << endl;

    rota.removerInicio();
    rota.removerFim();
    rota.listarIda();

    
    return 0;
}