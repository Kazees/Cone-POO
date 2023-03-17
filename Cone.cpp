#include "Cone.h"

void Cone::setAltura(float altura)
{
    if(altura<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero.");
    }

    this->altura=altura;
}

void Cone::setRaio(float raio)
{
    if(raio<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero.");
    }

    this->raio=raio;
}

Cone::Cone(float raio,float altura)
{
    setRaio(raio);
    setAltura(altura);
}