#include "Treinador.hpp"
#include "Pokemon.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonExplosivo.hpp"


void Treinador::cadastrar_pokemon_eletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio)
{
	PokemonEletrico* pokemon = new PokemonEletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
	_pokemons.push_back(pokemon);

}

void Treinador::cadastrar_pokemon_aquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato)
{
	PokemonAquatico* pokemon = new PokemonAquatico(nome, tipo_ataque, forca_ataque, litros_jato);
	_pokemons.push_back(pokemon);

}

void Treinador::cadastrar_pokemon_explosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao)
{
	PokemonExplosivo* pokemon = new PokemonExplosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
	_pokemons.push_back(pokemon);
}

Pokemon* Treinador::usar_pokemon(int idpk)
{
	Pokemon* p = _pokemons[idpk];

	if (p == NULL)
		cout << "Pokemon nao encontrado!" << endl;

	return p;
}

void Treinador::imprimir_informacoes()
{
	cout << "Nome: " << _nome << endl;

	if (_pokemons.empty()) {
		cout << "----------" << endl;
		cout << "Nenhum Pokemon cadastrado!" <<endl;
	}
	else {
		for (Pokemon* p : _pokemons) {
			cout << "----------" << endl;
			p->imprimir_informacoes();
		}
	}
		

	cout << "----------" << endl;
}
