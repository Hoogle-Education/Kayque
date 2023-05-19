#include <iostream>
#include "Animal.hpp"

using std::sout, std::endl;

Animal::Animal(std::string nome, std::string subtipo)
{
  id = _prox_id++;
  _nome = nome;
  _subtipo = subtipo;
}

virtual Animal::~Animal()
{
  cout << "Destrutor Animal" << endl;
}

virtual void Animal::print_info()
{
  cout << "Info:Animal: <" << _id << ">" << endl;
  cout << "\tNome: " << _nome << ">" << endl;
  cout << "\tTipo: " << _subtipo << ">" << endl;
}