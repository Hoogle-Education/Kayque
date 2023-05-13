#include "Pokemon.hpp"

class PokemonEletrico : public Pokemon
{
private:
	double _potencia_raio;
public:
	PokemonEletrico(string nome, string tipo_de_ataque, double forca, double potencia_raio)
		: Pokemon(nome, tipo_de_ataque, forca), _potencia_raio(potencia_raio) { }

	double calcular_dano() const override;
	double ataque_eletrico() const;
	void falar_tipo_ataque() const override;

};
