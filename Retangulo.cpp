#include "Retangulo.hpp"

void Retangulo::setAltura(float altura){
  this -> altura = altura;
}

void Retangulo::setBase(float base){
  this -> base = base;
}

void Retangulo::calculaArea(){
  area = (base * altura);
  cout << "\nA área do Rentangulo é: " << area;
}