#ifndef GATO_HPP
#define GATO_HPP

#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

class Gato : public Animal
{
private:
  int _tipo_pelo;
  int _agressivo;
  string identifica_tipo_pelo();
  string identifica_agressivo();

public:
  string public : Gato(string nome, int tipo_pelo, int agressivo);
  virtual ~Gato();
  virtual void print_info();
};

#endif // GATO_HPP