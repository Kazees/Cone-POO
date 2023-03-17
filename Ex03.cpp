#include <iostream>
#include <iomanip>
#include "Cone.h"
#include "Cone.cpp"

using namespace std;

int main()
{
    float raio,altura;
    bool conti=true;

    while(conti)
    {
        cout<<"Digite o valor do raio: ";
        cin>>raio;

        cout<<"Digite o valor da altura: ";
        cin>>altura;

        try
        {
            Cone n1(raio,altura);

            cout<<fixed<<setprecision(2);
            cout<<endl<<"Geratriz: "<<n1.calcularGeratriz()<<endl;
            cout<<"Area lateral: "<<n1.calcularArealateral()<<endl;
            cout<<"Area total: "<<n1.calcularArea()<<endl;
            cout<<"Volume: "<<n1.calcularVolume()<<endl;
            conti=false;
        }

        catch(invalid_argument &ex)
        {
            cout<<"Erro: "<<ex.what()<<endl;
            conti=true;
        }
    }

    
    

    return 0;
}