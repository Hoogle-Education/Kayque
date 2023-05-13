#pragma once
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Pokemon
{
protected:
	string _nome;
	string _tipo_de_ataque;
	double _forca_do_ataque;
	double _energia = 100;
public:
	Pokemon(string nome, string tipo_de_ataque, double forca_do_ataque)
		: _nome(nome), _tipo_de_ataque(tipo_de_ataque), _forca_do_ataque(forca_do_ataque) {}

	virtual ~Pokemon() {};

	string obter_nome() { return _nome; }
	void falar_nome() const;
	virtual void falar_tipo_ataque() const;
	void imprimir_status() const;
	void imprimir_informacoes() const;
	virtual double calcular_dano() const = 0;

	void atacar(Pokemon* outro);
	void receber_dano(double valor_dano);

};

