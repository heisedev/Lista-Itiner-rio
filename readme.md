01 - Lista Duplamente Encadeada (Itinerário de Ônibus)

Descrição
Exercício de implementação de uma Lista Duplamente Encadeada em C++ com alocação dinâmica de memória.
O projeto simula um sistema de itinerário de ônibus, permitindo manipulação de paradas com operações de inserção, remoção, busca e listagem em ordem direta e inversa.

Embora a lista duplamente encadeada seja adequada para manipular rotas lineares (ida e volta), em casos de linhas circulares de ônibus uma lista circular seria mais vantajosa. Isso porque o último nó aponta diretamente para o primeiro, representando naturalmente o trajeto contínuo sem necessidade de reinicializar a navegação. Assim, a estrutura reflete melhor o comportamento real da rota circular.

Funcionalidades
[x] Criação/Inicialização: criar uma lista vazia

[x] Inserção: início da lista

[x] Inserção: fim da lista

[x] Inserção: posição específica

[x] Remoção: primeira parada

[x] Remoção: última parada

[x] Busca: localizar parada por nome (correspondência parcial)

[x] Listagem: rota completa (ida)

[x] Listagem: rota em ordem inversa (volta)

[x] Contagem: quantidade total de paradas cadastradas

[x] Liberação: destruição da lista e liberação da memória

Pré-requisitos
Compilador C++ (g++ ou MSVC)
CMake (opcional, para build automatizado)
VSCode ou outro editor de texto (opcional)

Ferramentas de Desenvolvimento
Compilador: GCC/G++ ou MSVC
Debugger: GDB
Editor: Visual Studio Code (opcional)

Instalação
Clone o repositório:

bash
git clone https://github.com/<SEU_USUARIO>/<NOME_REPOSITORIO>

Certifique-se de ter g++ instalado em seu sistema.

Execução

Compilação Manual
Para compilar o projeto manualmente via terminal:

bash
g++ main.cpp src/ListaParadas.cpp -Iinclude -o main
./main

Depuração (Debugging)

Via VSCode
Abra a pasta do projeto no VSCode.
Coloque breakpoints no código.
Pressione F5 ou use a aba Run and Debug.

Via CLI (GDB)
bash
g++ -g main.cpp src/ListaParadas.cpp -Iinclude -o main
gdb ./main

Comandos básicos:
break main → adiciona breakpoint na função principal
run → executa o programa
next → próxima linha
print <variavel> → mostra valor da variável

Fluxo de Execução
Exemplo de saída:

Código
--- MENU ITINERÁRIO ---

Inserir parada no início

Inserir parada no fim
...
Escolha: 1
Nome da parada: Terminal

Escolha: 2
Nome da parada: Shopping

Escolha: 7
Rota (ida): Terminal -> Shopping -> FIM

Escolha: 8
Rota (volta): Shopping -> Terminal -> INÍCIO

Total de paradas: 2

Fluxo de Testes
Para compilar e rodar os testes:

bash
g++ tests/test.cpp src/ListaParadas.cpp -Iinclude -o tests_bin
./tests_bin

Saída esperada:

Código
=========================================
INICIANDO TESTES DE LISTA DUPLAMENTE ENCADEADA
=========================================

✓ inserirInicio() passou em todos os testes

✓ inserirFim() passou em todos os testes

✓ inserirPosicao() passou em todos os testes

✓ removerInicio() passou em todos os testes

✓ removerFim() passou em todos os testes

✓ buscar() passou em todos os testes

✓ listarIda() passou em todos os testes

✓ listarVolta() passou em todos os testes

✓ contar() passou em todos os testes

=========================================
✓ TODOS OS TESTES PASSARAM COM SUCESSO!
=========================================