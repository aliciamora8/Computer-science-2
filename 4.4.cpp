#include <iostream>

#include <cmath>

using namespace std;

void Rango(int&n1, int&n2)
{
    while(n1<0 || n2<0)
    {
        cout<<"Rango no valido. Introduzca otros valores:"<<endl;
        cout<<"Primer valor: ";
        cin>>n1;
        cout<<"Segundo valor: ";
        cin>>n2;
    }
}

void Intercambiar(int&n1, int&n2)
{
    int aux;
    if(n2<n1)
    {
        aux=n1;
        n1=n2;
        n2=aux;
    }
}
double NenRango(int&n1, int&n2)
{
    int n;
    cout<<"Introduce un valor n: ";
    cin>>n;
    while(n<n1 || n>n2)
    {
        cout<<"Valor no esta en el rango. Introduce otro valor:";
        cin>>n;
    }
    return n;
}

float Media(double n, double suma)
{
    float media=suma/n;
    cout<<"La media es: "<<media<<endl;
    return media;
}

float DesviacionMedia(double sumatorio1, double n)
{
    float desviacionmedia=sumatorio1/n;
    cout<<"La desviacion media es: "<<desviacionmedia<<endl;
    return desviacionmedia;
}

float Varianza(double sumatorio2, double n)
{
    float varianza=sumatorio2/n;
    cout<<"La varianza es: "<<varianza<<endl;
    return varianza;
}

int main()
{
    int n1,n2;
    cout<<"Introduce dos valores para el rango: "<<endl;
    cout<<"Primer valor: ";
    cin>>n1;
    cout<<"Segundo valor: ";
    cin>>n2;
    Rango(n1,n2);
    Intercambiar(n1,n2);
    cout<<"El rango es: ["<<n1<<", "<<n2<<"]"<<endl;
    double n=NenRango(n1,n2);

    int num;
    double suma=0;
    int v[10000];
    for(int i=0; i<n; i++)
    {
        cout<<"Introduce un numero: ";
        cin>>num;
        v[i]=num;
        suma=suma+num;
    }
    cout<<"El vector es: v["<<n<<"]= ";
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    float media=Media(n,suma);

    double sumatorio1=0;
    for(int i=0; i<n; i++)
    {
        sumatorio1=abs(v[i]-media)+sumatorio1;
    }
    float desviacionmedia=DesviacionMedia(sumatorio1,n);

    double sumatorio2=0;
    for(int i=0; i<n; i++)
    {
        sumatorio2=pow(v[i]-media,2)+sumatorio2;
    }
    float varianza=Varianza(sumatorio2,n);

    return 0;
}
