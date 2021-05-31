#include "Triangulo.hpp"

void Triangulo::setAltura(float altura){
  this -> altura = altura;
}

void Triangulo::setBase(float base){
  this -> base = base;
}

void Triangulo::calculaArea(){
  area = ((base * altura)/2);
  cout << "\nA área do Triangulo é: " << area;
}