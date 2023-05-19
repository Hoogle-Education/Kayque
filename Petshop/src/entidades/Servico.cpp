#include "Servico.hpp"

Servico::Servico()
{
}

Servico::~Servico() {}

void Servico::print_orcamentos()
{
  cout << "Quantidade de orcamentos: " << _orcamentos.size() << endl;
  for (Orcamento *orcamento : _orcamentos)
  {
    orcamento->print_info();
  }
}

void Servico::calcular_orcamento(Animal *animal)
{
  double valor = 0;

  if (animal->subtipo == "Ave")
  {
    valor = 30 * sqrt(animal->_tamanho) + 70;
  }
  else if (animal->subtipo == "Cachorro")
  {
    valor = 64 * log1p(1 + animal->_peso) + 15 * animal->_tipo_pelo + 100;
  }
  else
  {
    valor = 30 * animal->_tipo_pelo + 20 * animal->_agressivo + 150;
  }

  Orcamento *novo_orcamento = new Orcamento(animal, valor);
  _orcamentos.push_back(novo_orcamento);
}

void Servico::remove_orcamento(int id_animal)
{
  // TODO encontrar a posicao deste id
  int pos;
  _orcamentos.remove(pos);
}
