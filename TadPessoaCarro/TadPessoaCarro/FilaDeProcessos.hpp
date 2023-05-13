#ifndef FILA_DE_PROCESSOS_HPP
#define FILA_DE_PROCESSOS_HPP

#include "Processo.hpp"

typedef struct node Node;

typedef struct node {
	Processo* processo;
	Node* proximo;
	Node* anterior;
};

typedef struct fila {
	Node* inicio;
	Node* fim;
	int tamanho;
} FilaDeProcessos;

FilaDeProcessos* criar_fila_de_processos();
void adicionar_processo(FilaDeProcessos* fila, std::string nome, int prioridade);
Processo* remover_processo_maior_prioridade(FilaDeProcessos* fila);
Processo* remover_processo_por_id(FilaDeProcessos* fila, int id);
void estimativa_tempo_para_execucao(FilaDeProcessos* fila, int id);
void imprimir_fila(FilaDeProcessos* fila);

#endif // !FILA_DE_PROCESSOS_HPP
