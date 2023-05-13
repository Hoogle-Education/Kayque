#include "PokemonAquatico.hpp"

double PokemonAquatico::calcular_dano() const
{
	return ataque_aquatico();
}

double PokemonAquatico::ataque_aquatico() const
{
	return _forca_do_ataque + _litros_jato;
}

void PokemonAquatico::falar_tipo_ataque() const
{
	cout << _tipo_de_ataque << "!" << endl << "Splash!" << endl;
}
