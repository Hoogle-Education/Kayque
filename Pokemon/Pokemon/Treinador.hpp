#pragma once
#include <vector>
#include <string>
#include "Pokemon.hpp"

using namespace std;

class Treinador
{
private:
	string _nome;
	vector<Pokemon*> _pokemons;
public:
	Treinador(string nome) : _nome(nome) {}
	string obter_nome() { return _nome; }
	void cadastrar_pokemon_eletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio);
	void cadastrar_pokemon_aquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato);
	void cadastrar_pokemon_explosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao);
	Pokemon* usar_pokemon(int idpk);
	void imprimir_informacoes();
};

