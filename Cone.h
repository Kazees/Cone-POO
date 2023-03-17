#ifndef CONE_H
#define CONE_H
#include <stdexcept>
#include <cmath>

using std::invalid_argument;

class Cone
{
    private:
        float raio;
        float altura;

    public:
        Cone(float raio,float altura);

        void setRaio(float raio);
        void setAltura(float altura);

        float getRaio()const {return raio;}
        float getAltura()const {return altura;}

        float calcularGeratriz()const {return sqrt(raio*raio)+sqrt(altura*altura);}
        float calcularArealateral()const {return 3.1415*raio*calcularGeratriz();}
        float calcularArea()const {return 3.1415*raio*(calcularGeratriz()+raio);}
        float calcularVolume()const {return 1.0/3*3.1415*(raio*raio)*altura;}
};

#endif