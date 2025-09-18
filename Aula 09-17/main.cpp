#include "cat.hpp"
#include "dog.hpp"
#include "pet.hpp"
#include <iostream>
#include <memory>

using namespace lab3;
using namespace std;

#define LOG std::cout << __LINE__ << ": ";

int main(){
    auto p1 = make_shared<dog>("Rex");
    auto p2 = p1;
    p2->speak();
    return 0;
}

int main_3(){
    LOG; dog *rex = new dog("Rex");
    LOG; dog *d2 = rex;
    LOG; rex->speak();
    LOG; delete rex;
    LOG; d2->speak();
    LOG; return 0;
}




int main_2() {
  std::cout << "1) Dog\n"
               "2) Cat\n"
               "Escolha um pet: ";
  int op;
  std::cin >> op;
  std::cout << "Qual será o nome? ";
  std::string name;
  std::cin >> name;

  pet *mypet;
  if (op == 1)
    mypet = new dog(name);
  else
    mypet = new cat(name);

  mypet->speak();
  delete mypet;
  return 0;
}

// Versão com objetos já existentes
int main_1() {
  cat max("Max");
  dog rex("Rex");
  std::cout << "1) Max\n"
               "2) Rex\n"
               "Escolha um pet para adoção: ";
  int op;
  std::cin >> op;

  pet *mypet;
  if (op == 1) {
    mypet = &max;
  } else {
    mypet = &rex;
  }

  mypet->speak();
  return 0;
}


