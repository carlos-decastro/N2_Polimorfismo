#include "Triangulo.hpp"
#include "Retangulo.hpp"
#include "Circulo.hpp"

int main() {
    double raio;
    float baseRetangulo, alturaRetangulo, baseTriangulo, alturaTriangulo;

    Circulo circulo;
    Retangulo retangulo;
    Triangulo triangulo;

    cout << "Calcula área das formas geometricas\n\n";

    cout << "CIRCULO\n";
    cout << "Informe o raio do Circulo: ";
    cin >> raio;

    circulo.setRaio(raio);

    cout << "\nRETANGULO\n";
    cout << "Informe a base do Retangulo: ";
    cin >> baseRetangulo;
    cout << "Informe a altura do Retangulo: ";
    cin >> alturaRetangulo;
    
    retangulo.setBase(baseRetangulo);
    retangulo.setAltura(alturaRetangulo);

    cout << "\nTRIANGULO\n";
    cout << "Informe a base do Triangulo: ";
    cin >> baseTriangulo;
    cout << "Informe a altura do Triangulo: ";
    cin >> alturaTriangulo;

    triangulo.setBase(baseTriangulo);
    triangulo.setAltura(alturaTriangulo);

    circulo.calculaArea();
    retangulo.calculaArea();
    triangulo.calculaArea();
}