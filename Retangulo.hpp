#ifndef Retangulo_hpp
#define Retangulo_hpp

#include <iostream>
using namespace std;

#include "FormaGeometrica.hpp"

class Retangulo : public FormaGeometrica
{
  public:

    Retangulo(){};

    void calculaArea();
    void setBase(float base);
    void setAltura(float altura);

  private:
    float base;
    float altura;
};

#endif