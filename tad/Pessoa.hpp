#ifndef PESSOA_HPP
#define PESSOA_HPP

typedef struct pessoa
{
  double x;
  double y;
} Pessoa;

Pessoa *criar_pessoa(double x, double y);
double pessoa_get_x(Pessoa *pessoa);
double pessoa_get_y(Pessoa *pessoa);
void pessoa_mover(Pessoa *pessoa, double delta_x, double delta_y);

#endif // PESSOA_HPP