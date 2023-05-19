#ifndef SERVICO_HPP
#define SERVICO_HPP

#include <iostream>
#include <math.h>
#include <list>
#include <string>

class Servico
{
private:
  list<Orcamento *> _orcamentos;

public:
  Servico();
  virtual ~Servico();
  void print_orcamentos();
  void calcular_orcamento(Animal *animal);
  void remove_orcamento(int id_animal);
};

#endif // SERVICO_HPP