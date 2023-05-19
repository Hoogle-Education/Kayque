#include "Cachorro.hpp"

using std::cout, std::endl;

Cachorro::Cachorro(string nome, float peso, int tipo_pelo)
    : Animal(nome, "Cachorro"), _peso(peso), _tipo_pelo(tipo_pelo) {}

Cachorro::~Cachorro()
{
  Animal::~Animmal();
}

void Cachorro::print_info() override
{
  Animal::print_info();
  cout << "\tPeso: <" << _peso << ">" << endl;
  cout << "\tPelo: <" << _tipo_pelo << ">" << endl;
}
