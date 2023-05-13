#include <iostream>
#include "Pessoa.hpp"

using namespace std;

int main()
{

  Pessoa* joao = criar_pessoa(1, 2);
  pessoa_mover(joao, 3, 5);

  cout << "X: " << pessoa_get_x(joao) << endl;
  cout << "Y: " << pessoa_get_y(joao) << endl;

  return 0;
}