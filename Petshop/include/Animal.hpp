#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
private:
  static int _prox_id = 1;
  int _id;
  std::string _nome;
  std::string _subtipo;

public:
  Animal(std::string nome, std::string subtipo);
  virtual ~Animal();
  virtual void print_info();
};

#endif // ANIMAL_HPP
