#ifndef CARRO_HPP
#define CARRO_HPP

#include "Pessoa.hpp"
#include <cmath>
#include<iostream>

typedef struct carro
{
  double x;
  double y;
  double th;
} Carro;

Carro *cria_carro(double x, double y, double th);
double carro_get_x(Carro *carro);
double carro_get_y(Carro *carro);
double carro_get_th(Carro *carro);
void carro_girar(Carro *carro, double w, double t);
void carro_mover(Carro *carro, double v, double t);
double carro_calcular_angulo_pessoa(Carro *carro, Pessoa *pessoa);
double carro_calcular_distancia_pessoa(Carro *carro, Pessoa *pessoa);
bool carro_movimentacao_permitida(Carro *carro, Pessoa** pessoas, int n);
void carro_navegar(Carro *carro, Pessoa** pessoas, int n, double w, double t, double v);

#endif // CARRO