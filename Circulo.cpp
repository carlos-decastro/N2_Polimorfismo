#include "Circulo.hpp"

#include <cmath>

void Circulo::setPi(double pi){
  this -> pi = pi;
}

void Circulo::setRaio(double raio){
  this -> raio = raio;
}

void Circulo::calculaArea(){
  area = ((pi) * (pow(raio,2)));
  cout << "\nA área do Circulo é: " << area;
}