#include <iostream>
#include <vector>
using namespace std;

void LecturaDatos(int n,vector<double>&latitud, vector<double>&longitud, vector<double>&altura)
{

    for (int i=0; i<n; i++)
    {
        cout<<"Introduzca posiciones latitud, longitud y altura: "<<endl;
        cin>>latitud[i];
        cin>>longitud[i];
        cin>>altura[i];
    }
}

bool Ordenado(const vector<double>&v)
{
    bool ordenado=true;

    if(v[0]>v[1])
    {
        for (int i=0; i<v.size()-1 && ordenado ; i++)
        {
            if(v[i]<v[i+1])
            {
                ordenado=false;
            }
        }
    }
    else if(v[0]<v[1] )
    {
        for (int i=0; i<v.size()-1 && ordenado ; i++)
        {
            if(v[i]>v[i+1])
            {
                ordenado=false;
            }
        }

    }

    return ordenado;
}

void OrdenarVector(vector<double>&v)
{
    for(int j=0; j<v.size()-1; j++)
    {
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]>v[i+1])
            {
                int aux;
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }

    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

double Mediana(const vector<double>&v, char opcion){
    double mediana;
    int posicion=v.size()/2;

    if(v.size()%2!=0){
        mediana=v[posicion];
    }

    else {
        if(opcion=='m'){
             double v1=v[posicion-1];
        double v2=v[posicion];
        mediana=(v1+v2)/2;
        }
        if(opcion=='i'){
            mediana=v[posicion-1];
        }
        if(opcion=='d'){
            mediana=v[posicion];
        }

    }
    return mediana;
}


int main()
{
    int n;
    cout<<"Introduzca el numero de posiciones ";
    cin>>n;

    vector<double>latitud(n);
    vector<double>longitud(n);
    vector<double>altura(n);

    LecturaDatos(n,latitud,longitud,altura);

    if(Ordenado(latitud)==true)
    {
        cout<<"Vector latitud: ORDENADO"<<endl;
    }
    else
    {
        cout<<"Vector latitud: NO ORDENADO"<<endl;
        cout<<"El vector latitud ordenado es: "<<endl;
        OrdenarVector(latitud);


    }

    if(Ordenado(longitud)==true)
    {
        cout<<"Vector longitud: ORDENADO"<<endl;
    }
    else
    {
        cout<<"Vector longitud: NO ORDENADO"<<endl;
        cout<<"El vector longitud ordenado es: "<<endl;
        OrdenarVector(longitud);

    }

    if(Ordenado(altura)==true)
    {
        cout<<"Vector altura: ORDENADO"<<endl;
    }
    else
    {
        cout<<"Vector altura: NO ORDENADO"<<endl;
        cout<<"El vector altura ordenado es: "<<endl;
        OrdenarVector(altura);

    }
    char opcion='?';
    if(n%2==0){
    	do{
    	cout<<"Introduce una opcion para  ";
        cin>>opcion;
		}while(opcion!='m' && opcion!='i'&& opcion!='d');
        
    }

    double m1,m2,m3;
    m1=Mediana(latitud,opcion);
    m2=Mediana(longitud,opcion);
    m3=Mediana(altura,opcion);
    cout<<"La posicion central <latitud,longitud,altura> es: "<<m1<<" "<<m2<<" "<<m3;

}
