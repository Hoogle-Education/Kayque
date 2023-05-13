#pragma once
#include "Pokemon.hpp"

class PokemonAquatico : public Pokemon
{
private:
	double _litros_jato;
public:
	PokemonAquatico(string nome, string tipo_de_ataque, double forca, double litros_jato)
		: Pokemon(nome, tipo_de_ataque, forca), _litros_jato(litros_jato) { }

	double calcular_dano() const override;
	double ataque_aquatico() const;
	void falar_tipo_ataque() const override;

};

