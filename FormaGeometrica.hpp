#ifndef FormaGeometrica_hpp
#define FormaGeometrica_hpp

#include <iostream>
using namespace std;

class FormaGeometrica{
  public:

    virtual void calculaArea() = 0;

  protected:
    float area;
};

#endif


