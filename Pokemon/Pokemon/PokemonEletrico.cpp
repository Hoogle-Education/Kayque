
#include "PokemonEletrico.hpp"

double PokemonEletrico::calcular_dano() const
{
	return ataque_eletrico();
}

double PokemonEletrico::ataque_eletrico() const
{
	return _forca_do_ataque * _potencia_raio;
}

void PokemonEletrico::falar_tipo_ataque() const
{
	cout << _tipo_de_ataque << "!" << endl << "Bzzzz!" << endl;
}
