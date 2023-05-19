#ifndef ORCAMENTO_HPP
#define ORCAMENTO_HPP

#include <iostream>
#include <iomanip>
#include <string>

using std::cout, std::endl, std::fixed, std::setprecision;

class Orcamento
{
private:
  Animal *_pet;
  float _valor;

public:
  Orcamento(Animal *pet, float valor);
  virtual ~Orcamento();
  virtual void print_info();
};

#endif // ORCAMENTO_HPP