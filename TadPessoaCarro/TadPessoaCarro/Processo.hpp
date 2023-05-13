#ifndef PROCESSO_HPP
#define PROCESSO_HPP
#include <iostream>

typedef struct processo {
	int id;
	int prioridade;
	std::string nome;
} Processo;

Processo* criar_processo(int id, std::string nome, int prioridade);
int processo_get_id(Processo* processo);
int processo_get_prioridade(Processo* processo);
std::string processo_get_nome(Processo* processo);
double processo_tempo_reservado(Processo* processo);
void imprimir_dados(Processo* processo);

#endif // !PROCESSO_HPP
