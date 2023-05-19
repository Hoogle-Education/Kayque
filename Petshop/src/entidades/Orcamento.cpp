#include "Orcamento.hpp"

Orcamento::Orcamento(Animal *pet, float valor)
    _pet(pet),
    _valor(valor) {}

Orcamento::~Orcamento()
{
  cout << "Destrutor Orcamento" << endl;
}

virtual void Orcamento::print_info()
{
  cout << "============================" << endl;
  cout << "Info: Orcamento" << endl;
  cout << fixed << setprecision(2) << "Valor: R$ <" << _valor << ">" << endl;
  cout << "Pet " << _pet->print_info();
  cout << "============================" << endl;
}