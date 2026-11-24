TRABALHO PRÁTICO 1 — A FORJA DO BLIBBLON (DCC221 - ESTRUTURAS DE DADOS)

1. DESCRIÇÃO GERAL
Sistema desenvolvido em linguagem C (padrão C11) para gerenciamento da forja de equipamentos do Blibblon. O projeto implementa o cadastro dinâmico de itens e atributos, uma matriz esparsa de modificadores com troca dinâmica de representação interna (Modo T e Modo L), controle de histórico de operações via pilha e gerenciamento de atendimento de encomendas via fila.

2. ESTRUTURA DO PROJETO
TP1/
├── Makefile
├── bin/          (diretório de saída do executável)
├── obj/          (diretório de arquivos objeto .o)
├── include/      (arquivos de cabeçalho .h)
└── src/          (arquivos de código-fonte .c)

3. REQUISITOS
- Compilador GCC com suporte a C11 (-std=c11)
- Utilitário Make (make no Linux ou mingw32-make no Windows)

4. COMPILAÇÃO E EXECUÇÃO
- Para compilar o projeto:
  make all

- Para executar com redirecionamento de entrada:
  ./bin/tp1.out < entrada.txt

- Para limpar os arquivos compilados (binários e objetos):
  make clean

5. ESTRUTURAS DE DADOS IMPLEMENTADAS
- Matriz Esparsa (Modo T — Vetor de Tripletas): Armazena apenas os elementos não nulos no formato (id_item, id_atributo, valor) em memória contígua, priorizando baixo consumo de espaço.
- Matriz Esparsa (Modo L — Listas Encadeadas Cruzadas): Representação dinâmica com cabeçalhos para linhas (itens) e colunas (atributos) e ponteiros prox_linha e prox_coluna, otimizando consultas e percursos diretos por item ou atributo.
- Pilha (LIFO): Armazena o histórico de modificações para suporte à operação de desfazer (undo).
- Fila (FIFO): Gerencia a ordem de chegada e atendimento das encomendas da forja.

6. AUTOR
Alexandre Guimarães Fabbri Cunha
Ciência da Computação / Engenharia de Computação — UFMG
