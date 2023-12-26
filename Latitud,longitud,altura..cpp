#include <iostream>

using namespace std;


bool Leer3Angulo (double& angulo)
{
    double g,m,s;
    char car= '?';
    bool exito= false;

    cout<<"Introduce grados ";
    cin >> g >> car;
    if (car=='g')
    {
        cout<<"Introduce minutos ";
        cin >> m >> car;
        if (car=='m')
        {
            cout<<"Introduce segundos ";
            cin >> s >> car;
            if (car=='s')
            {
                exito= true;
            }
        }
    }
    if ( (g<0 || m<0 || s<0))
        exito= false;
    else
        angulo= g + m/60.0 + s/3600.0;
    return exito;
}


bool Latitud(double&angulo1,char letra1)
{
    bool exito=true;
    if(letra1!='S'&&letra1!='N')
    {
        exito=false;
    }
    if(letra1=='S')
    {
        angulo1=-angulo1;
    }

    return exito;
}

void LeerLatitud(double&angulo1, char letra1)
{
    if(Latitud(angulo1,letra1)==true)
    {
        int grados= angulo1;
        angulo1= (angulo1-grados) * 60;
        int minutos= angulo1;
        angulo1= (angulo1-minutos) * 60;
        cout << grados << "g " <<  minutos << "m " << angulo1 << "s"<<" "<<letra1<<" ";

    }
    else
    {
        cout<<"ERROR";
    }
}

bool Longitud(double&angulo2,char letra2)
{
    bool exito=true;
    if(letra2!='E'&&letra2!='W')
    {
        exito=false;
    }
    if(letra2=='E')
    {
        angulo2=-angulo2;
    }

    return exito;
}

void LeerLongitud(double&angulo2, char letra2)
{
    if(Longitud(angulo2,letra2)==true)
    {
        int grados= angulo2;
        angulo2= (angulo2-grados) * 60;
        int minutos= angulo2;
        angulo2= (angulo2-minutos) * 60;
        cout << grados << "g " <<  minutos << "m " << angulo2 << "s"<<" "<<letra2<<" ";
    }
    else
    {
        cout<<"ERROR";
    }
}


int main()
{
    double angulo1=0;
    bool a=Leer3Angulo(angulo1);
    char letra1='?';
    if(a==true && angulo1>=0 && angulo1<=180)
    {
        cout<<"Introduce una letra ";
        cin>>letra1;
    }

    double angulo2=0;
    bool b=Leer3Angulo(angulo2);
    char letra2='?';
    if(b==true && angulo2>=0 && angulo2<=180)
    {
        cout<<"Introduce una letra ";
        cin>>letra2;
    }


    double altura;
    cout<<"Introduce la altura ";
    cin>>altura;


    cout<<"Las coordenadas son: ";
    LeerLatitud(angulo1,letra1);
    cout<<" ";
    LeerLongitud(angulo2,letra2);
    cout<<" "<<altura<<" m";
}

