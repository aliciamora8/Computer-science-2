#include <iostream>

using namespace std;

float GradosaRadianes(float g)
{
    float pi=3.14159265358979323846;
    float rad;
    rad=(g*pi)/180;
    return rad;
}

float RadianesaGrados(float rad)
{
    float pi=3.14159265358979323846;
    float g;
    g=(rad*180)/pi;
    return g;
}

float Normalizar(float g)
{
    int numerovueltas=g/360;
    float normalizado=g-(numerovueltas*360);
    if (normalizado>180 && normalizado<=360)
    {
        normalizado=normalizado-360;
    }
    return normalizado;

}

float Gmsagrado(int grado, int m, int s)
{
    float decimal=grado+(m/60)+(s/3600);
    return decimal;
}

void Gradoagms(float normalizado)
{
    float aux1=normalizado;
    int grd=normalizado;
    float aux2=(aux1-grd)*60;
    int minutos=aux2;
    int segundos=(aux2-minutos)*60;
    cout<<grd<<" grados "<<minutos<<" minutos "<<segundos<<" segundos."<<endl;
}

int main()
{
    cout<<"Introduza un angulo en formato grados, minutos, segundos: "<<endl;
    float grado,m,s;
    cout<<" Grados: ";
    cin>>grado;
    cout<<" Minutos: ";
    cin>>m;
    cout<<" Segundos: ";
    cin>>s;
    float g=Gmsagrado(grado,m,s);
    float rad;
    rad=GradosaRadianes(g);
    cout<<endl<<"El angulo introducido es " <<g<< ", y el angulo en radianes es "<< rad<<endl;
    float grados=RadianesaGrados(rad);
    cout<<"El angulo componiendo las dos funciones es " <<grados;
    float normalizado=Normalizar(g);
    float normalizadorad=GradosaRadianes(normalizado);
    cout<<"El angulo normlizado es " <<normalizado<< ", y en radianes es "<<normalizadorad<<endl;
    cout<<"El angulo en formato grados, minutos, segundos es ";
    Gradoagms(normalizado);

    return 0;

}
