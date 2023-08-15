#include <iostream>
#include <string>
#include <ctime>
#define TAM 10

using namespace std;

typedef struct
{
    int x;
    int y;
} Ponto;

int main()

{

    Ponto vetor[TAM];
    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {

        vetor[i].x = 6 - rand() % 13;
        vetor[i].y = 6 - rand() % 13;
    }

    for (int i = 0; i < TAM; i++)
    {
        double x = vetor[i].x;
        double y = vetor[i].y;

        if (x > 0 && y > 0)
        {
            std::cout << "Ponto " << i + 1 << " (" << x << ", " << y << ") está no primeiro quadrante." << std::endl;
        }
        else if (x < 0 && y > 0)
        {
            std::cout << "Ponto " << i + 1 << " (" << x << ", " << y << ") está no segundo quadrante." << std::endl;
        }
        else if (x < 0 && y < 0)
        {
            std::cout << "Ponto " << i + 1 << " (" << x << ", " << y << ") está no terceiro quadrante." << std::endl;
        }
        else if (x > 0 && y < 0)
        {
            std::cout << "Ponto " << i + 1 << " (" << x << ", " << y << ") está no quarto quadrante." << std::endl;
        }
        else if (x == 0 && y == 0)
        {
            std::cout << "Ponto " << i + 1 << " (" << x << ", " << y << ") está na origem." << std::endl;
        }
        else if (x == 0)
        {
            std::cout << "Ponto " << i + 1 << " (" << x << ", " << y << ") está sobre o eixo Y." << std::endl;
        }
        else
        {
            std::cout << "Ponto " << i + 1 << " (" << x << ", " << y << ") está sobre o eixo X." << std::endl;
        }
    }
}
