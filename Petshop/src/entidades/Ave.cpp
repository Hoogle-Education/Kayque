#include "Ave.hpp"

using std::cout, std::endl;

Ave::Ave(string nome, int tamanho)
    : Animal(nome, "Ave"), _tamanho(tamanho) {}

Ave::~Ave()
{
  Animal::~Animal();
}

void Ave::print_info() override
{
  Animal::print_info();
  cout << "\tTamanho: <" << _tamanho << ">" << endl;
}
