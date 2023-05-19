#ifndef AVE_HPP
#define AVE_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Ave : public Animal
{
private:
  int _tamanho;

public:
  Ave(string nome, int tamanho);
  virtual ~Ave();
  virtual void print_info();
};

#endif // AVE_HPP