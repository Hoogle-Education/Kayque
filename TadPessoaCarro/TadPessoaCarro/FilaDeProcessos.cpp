#include "FilaDeProcessos.hpp"

FilaDeProcessos* criar_fila_de_processos() {
	FilaDeProcessos* fila = new FilaDeProcessos;
	fila->fim = NULL;
	fila->inicio = NULL;
	fila->tamanho = 0;
	return fila;
}

void adicionar_processo(FilaDeProcessos* fila, std::string nome, int prioridade) {
	Node* node_processo = new Node;
	node_processo->processo = criar_processo(++fila->tamanho, nome, prioridade);
	node_processo->anterior = NULL;
	node_processo->proximo = NULL;

	if (fila->inicio == NULL) {
		fila->inicio = node_processo;
		fila->fim = node_processo;
		return;
	}

	Node* aux = fila->inicio;

	while (aux != NULL
		&& prioridade <= processo_get_prioridade(aux->processo)) {
		aux = aux->proximo;
	}

	if (aux == NULL) {
		node_processo->anterior = fila->fim;
		fila->fim->proximo = node_processo;
		fila->fim = node_processo;
		return;
	}
		
	node_processo->anterior = aux;
	node_processo->proximo = aux->proximo;
	aux->proximo = node_processo;
	aux->proximo->anterior = node_processo;
}

//Processo* remover_processo_maior_prioridade(FilaDeProcessos* fila);
//Processo* remover_processo_por_id(FilaDeProcessos* fila, int id);
//void estimativa_tempo_para_execucao(FilaDeProcessos* fila, int id);
//void imprimir_fila(FilaDeProcessos* fila);