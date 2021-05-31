#ifndef Triangulo_hpp
#define Triangulo_hpp

#include <iostream>
using namespace std;

#include "FormaGeometrica.hpp"

class Triangulo : public FormaGeometrica
{
  public:

    Triangulo(){};
    
    void calculaArea();
    void setBase(float base);
    void setAltura(float altura);

  private:
    float base;
    float altura;
};

#endif