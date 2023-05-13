#include "Pessoa.hpp"
#include <stdlib.h>

Pessoa *criar_pessoa(double x, double y)
{
  Pessoa *p = new Pessoa;
  p->x = x;
  p->y = y;
  return p;
}

double pessoa_get_x(Pessoa *pessoa) { return pessoa->x; }

double pessoa_get_y(Pessoa *pessoa) { return pessoa->y; }

void pessoa_mover(Pessoa *pessoa, double delta_x, double delta_y)
{
  pessoa->x += delta_x;
  pessoa->y += delta_y;
}