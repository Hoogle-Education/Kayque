#include "PokemonExplosivo.hpp"

double PokemonExplosivo::calcular_dano() const
{
	return ataque_explosivo();
}

double PokemonExplosivo::ataque_explosivo() const
{
	return _forca_do_ataque / _temperatura_explosao;
}

void PokemonExplosivo::falar_tipo_ataque() const
{
	cout << _tipo_de_ataque << "!" << endl << "Boom!" << endl;
}

