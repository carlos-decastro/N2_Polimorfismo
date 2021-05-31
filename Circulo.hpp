#ifndef Circulo_hpp
#define Circulo_hpp

#include <iostream>
using namespace std;

#include "FormaGeometrica.hpp"

class Circulo : public FormaGeometrica
{
  public:

    Circulo(){};

    void calculaArea();
    void setPi(double pi);
    void setRaio(double raio);

  private:
    double pi = 3.14;
    double raio;
};

#endif

