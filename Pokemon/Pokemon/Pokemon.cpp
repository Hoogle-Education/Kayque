// Pokemon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pokemon.hpp"

void Pokemon::falar_nome() const {
	cout << _nome << "!" << endl;
}

void Pokemon::falar_tipo_ataque() const {
	cout << _tipo_de_ataque << "!" << endl; 
}

void Pokemon::imprimir_status() const
{
	falar_nome();
	cout << "Energia: " << _energia << endl;
}

void Pokemon::imprimir_informacoes() const
{
	cout << "Pokemon: " << _nome << endl;
	cout << "Tipo ataque: " << _tipo_de_ataque << endl;
	cout << "Dano: " << calcular_dano() << endl;
	cout << "Energia: " << _energia << endl;
}

void Pokemon::atacar(Pokemon* outro)
{
	falar_nome();
	falar_tipo_ataque();
	double dano = calcular_dano();
	cout << "Dano: " << dano << endl;
	outro->receber_dano(dano);
}

void Pokemon::receber_dano(double valor_dano)
{
	_energia = max(_energia - valor_dano, 0.0);
	if (_energia == 0) cout << _nome << " morreu!" << endl;
}
