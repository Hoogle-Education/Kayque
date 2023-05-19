#ifndef CACHORRO_HPP
#define CACHORRO_HPP

#include <iostream>
#include <string>

class Cachorro : public Animal
{
private:
  float _peso;
  int _tipo_pelo;

public:
  Cachorro(string nome, float peso, int tipo_pelo);
  virtual ~Cachorro();
  virtual void print_info();
};

#endif // CACHORRO_HPP