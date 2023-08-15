/**
 * Em um plano cartesiano, um círculo pode ser definido pelas coordenadas do centro e pelo raio,
 * enquanto um retângulo de lados paralelos aos eixos pode ser definido pelas coordenadas dos
 * vértices superior esquerdo e inferior direito. Escreva um programa que leia os valores que definem
 * um retângulo e um círculo, e verifique qual tem o maior perímetro e qual tem a maior área.
 */

#include <iostream>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

using namespace std;

typedef struct
{
    int x, y; // coord. do centro do circulo
    int raio;
    int perimetro;
    int area;
} Circulo;

typedef struct
{
    int xSuperiorEsq;
    int ySuperiorEsq;
    int xInferiorDir;
    int yInferiorDir;
    int altura;
    int base;
    int perimetro;
    int area;
} Retangulo;

int main()
{

    Circulo c;
    Retangulo r;

    cout << "\nLendo dados de um circulo\n";
    cout << "Digite coordenada x do circulo(centro): \n";
    std::cin >> c.x;
    cout << "Digite coordenada y do circulo(centro): \n";
    std::cin >> c.y;
    cout << "Digite o raio do circulo:\n";
    std::cin >> c.raio;

    c.perimetro = 2 * PI * c.raio;

    c.area = PI * pow(c.raio, 2);

    cout << "\nLendo dados de um retangulo\n";
    cout << "Digite coordenada x superior esquerda do retangulo: \n";
    std::cin >> r.xSuperiorEsq;
    cout << "Digite coordenada y superior esquerda do retangulo: \n";
    std::cin >> r.ySuperiorEsq;
    cout << "Digite coordenada x inferior esquerda do retangulo: \n";
    std::cin >> r.xInferiorDir;
    cout << "Digite coordenada y insferior esquerda do retangulo: \n";
    std::cin >> r.yInferiorDir;
    cout << "Digite o raio do circulo:\n";

    r.altura = abs(r.ySuperiorEsq - r.yInferiorDir);

    r.base = abs(r.xSuperiorEsq - r.xInferiorDir);

    r.perimetro = (r.altura * 2) + (r.base * 2);

    r.area = r.altura * r.base;

    if (c.area > r.area)
    {

        cout << "\nCirculo tem area maior: \n"
             << c.area;
    }
    else
    {
        cout << "\nRetangulo tem area maior: \n"
             << r.area;
    }
    if (c.perimetro > r.perimetro)
    {
        cout << "\nCirculo tem perimetro maior: \n"
             << c.perimetro;
    }else
    {
        cout << "\nRetangulo tem perimetro maior: \n"
            << r.perimetro;
    }
}