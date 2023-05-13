#pragma once
#include "Pokemon.hpp"

class PokemonExplosivo : public Pokemon
{
private:
	double _temperatura_explosao;
public:
	PokemonExplosivo(string nome, string tipo_de_ataque, double forca, double temperatura_explosao)
		: Pokemon(nome, tipo_de_ataque, forca), _temperatura_explosao(temperatura_explosao) { }

	double calcular_dano() const override;
	double ataque_explosivo() const;
	void falar_tipo_ataque() const override;
};

