#include "Campeonato.hpp"
#include <iostream>
#include <string>

using namespace std;

void apresentarMenu() {
	cout << "escolha uma das opcoes abaixo: " << endl;
	cout << "'t' para cadastrar um novo treinador no campeonato" << endl;
	cout << "'i' para exibir detalhes de treinador pelo seu indice" << endl;
	cout << "'e' para adicionar um pokemon eletrico a um treinador" << endl;
	cout << "'q' para adicionar um pokemon aquatico a um treinador" << endl;
	cout << "'x' para adicionar um pokemon explosao a um treinador" << endl;
	cout << "'h' para realizar uma batalha" << endl;
	cout << "'b' para realizar a avaliação básica" << endl;
	cout << "'0' para sair" << endl;
}

void opcao_cadastra_treinador(Campeonato* campeonato) {
	string nome;
	//cout << "Digite o nome do treinador: ";
	cin >> nome;
	campeonato->cadastrar_treinador(nome);
}

void opcao_exibe_treinador(Campeonato* campeonato) {
	int idt;
	//cout << "Digite o indice do treinador que deseja ver detalhes: ";
	cin >> idt;
	campeonato->imprimir_informacoes_treinador(idt);
}

void opcao_cadastra_pokemon(Campeonato* campeonato, char tipo) {
	int idt;
	string nome, tipo_ataque;
	double forca_ataque, especial;
	cin >> idt;
	cin >> nome;
	cin >> tipo_ataque;
	cin >> forca_ataque;
	cin >> especial;
	if(tipo == 'q')
		campeonato->cadastrar_pokemon_aquatico(idt, nome, tipo_ataque, forca_ataque, especial);
	else if(tipo == 'e')
		campeonato->cadastrar_pokemon_eletrico(idt, nome, tipo_ataque, forca_ataque, especial);
	else if(tipo == 'e')
		campeonato->cadastrar_pokemon_explosivo(idt, nome, tipo_ataque, forca_ataque, especial);
}


void opcao_executa_batalha(Campeonato* campeonato) {
	int idt1, idt2;
	int idpk1, idpk2;
	
	//cout << "Digite o indice do primeiro treinador da batalha: ";
	cin >> idt1;
	//cout << "Digite o indice do pokemon a ser utilizado por este treinador: ";
	cin >> idpk1;

	//cout << "Digite o indice do segundo treinador da batalha: ";
	cin >> idt2;
	//cout << "Digite o indice do pokemon a ser utilizado por este treinador: ";
	cin >> idpk2;

	campeonato->executar_batalha(idt1, idpk1, idt2, idpk2);
}

int main(void) {

	char option;
	Campeonato* campeonato = new Campeonato();

	do {
		//apresentarMenu();
		cin >> option;

		if (option == 't')
			opcao_cadastra_treinador(campeonato);
		else if (option == 'i')
			opcao_exibe_treinador(campeonato);
		else if (option == 'x' || option == 'e' || option == 'q')
			opcao_cadastra_pokemon(campeonato, option);
		else if (option == 'h')
			opcao_executa_batalha(campeonato);
		else if (option == 'b')
			cout << "avaliacao basica!" << endl;

	} while (option != '0');

	return 0;
}