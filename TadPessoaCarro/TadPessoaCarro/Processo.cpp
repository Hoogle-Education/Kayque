#include "Processo.hpp"
#include <string.h>

Processo* criar_processo(int id, std::string nome, int prioridade) {
	Processo* processo = new Processo;
	processo->id = id;
	processo->nome = nome;
	processo->prioridade = prioridade;
	return processo;
}

int processo_get_id(Processo* processo) { return processo->id;  }
std::string processo_get_nome(Processo* processo) { return processo->nome; }
int processo_get_prioridade(Processo* processo) { return processo->prioridade;  }

double processo_tempo_reservado(Processo* processo) {
	switch (processo->prioridade) {
		case 0: return 0.5;
		case 1: return 1.5;
		case 2: return 3.0;
		default: return 0.0;
	}
}

void imprimir_dados(Processo* processo) {
	std::string prioridade = "";

	switch (processo->prioridade) {
		case 0: 
			prioridade = "BAIXA"; 
			break;
		case 1: 
			prioridade = "MEDIA";
			break;
		case 2: 
			prioridade = "ALTA";
			break;
	}

	std::cout << processo->id << "\t";
	std::cout << processo->nome << "\t";
	std::cout << prioridade << std::endl;
}