#include "Campeonato.hpp"

void Campeonato::cadastrar_treinador(string nome)
{
	Treinador* treinador = new Treinador(nome);
	_treinadores.push_back(treinador);
}

void Campeonato::cadastrar_pokemon_eletrico(int idt, string nome, string tipo_ataque, double forca_ataque, double potencia_raio)
{
	Treinador* t = _treinadores[idt];

	if (t == NULL) {
		cout << "Treinador ainda não cadastrado!" << endl;
		return;
	}

	t->cadastrar_pokemon_eletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
}

void Campeonato::cadastrar_pokemon_explosivo(int idt, string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao)
{
	Treinador* t = _treinadores[idt];

	if (t == NULL) {
		cout << "Treinador ainda não cadastrado!" << endl;
		return;
	}

	t->cadastrar_pokemon_explosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
}

void Campeonato::imprimir_informacoes_treinador(int idt)
{
	Treinador* t = _treinadores[idt];

	if (t == NULL) {
		cout << "Treinador ainda não cadastrado!" << endl;
		return;
	}

	t->imprimir_informacoes();
}

void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2)
{
	Treinador* treinador1 = _treinadores[idt1];
	Treinador* treinador2 = _treinadores[idt2];
	Pokemon* pokemon1 = treinador1->usar_pokemon(idpk1);
	Pokemon* pokemon2 = treinador2->usar_pokemon(idpk2);
	cout << "#########" << endl;
	cout << "### Batalha ###" << endl;
	cout << treinador1->obter_nome() << " (" << pokemon1->obter_nome() << ") vs. ";
	cout << treinador2->obter_nome() << " (" << pokemon2->obter_nome() << ")" << endl;
	pokemon1->atacar(pokemon2);
	pokemon2->imprimir_status();
	cout << "#########" << endl;
}

void Campeonato::cadastrar_pokemon_aquatico(int idt, string nome, string tipo_ataque, double forca_ataque, double litros_jato)
{
	Treinador* t = _treinadores[idt];

	if (t == NULL) {
		cout << "Treinador ainda não cadastrado!" << endl;
		return;
	}

	t->cadastrar_pokemon_aquatico(nome, tipo_ataque, forca_ataque, litros_jato);
}
