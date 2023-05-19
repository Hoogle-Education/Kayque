#include "Gato.hpp"

Gato::Gato(string nome, int tipo_pelo, int agressivo)
    : Animal(nome, "Gato"), _tipo_pelo(tipo_pelo), _agressivo(agressivo) {}

Gato::~Gato()
{
  Animal::~Animal();
}

void Gato::print_info() override
{
  string texto_pelo = identifica_tipo_pelo();
  string texto_agressivo = identifica_agressivo();

  Animal::print_info();
  cout << "\tPelo: <" << texto_pelo << ">" << endl;
  cout << "\tAgressivo: <" << texto_agessivo << ">" << endl;
}

string Gato::identifica_tipo_pelo()
{
  switch (_tipo_pelo)
  {
  case 0:
    return "nenhum";
  case 1:
    return "curto";
  case 2:
    return "medio";
  case 3:
    return "longo";
  }
}

string Gato::identifica_agressivo()
{
  switch (_agressivo)
  {
  case 0:
    return "baixo";
  case 1:
    return "moderado";
  case 2:
    return "alto";
  }
}