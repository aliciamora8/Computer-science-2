#include <iostream>
#include<string>

using namespace std;

void Minuscula(string&texto)
{
    for(int i=0; i<texto.size(); i++)
    {
        texto[i]=tolower(texto[i]);
    }
}

int Buscador(string palabra, string texto)
{
    Minuscula(texto);
    bool encontrar=false;

    int posicion=0;

    for(int i=0; i<texto.size() && encontrar==false; i++)
    {
        encontrar=true;
        for(int j=0; j<palabra.size() && encontrar==true ; j++)
        {
            if(texto[i+j]==palabra[j])
            {
                posicion=i;
            }
            else
            {
                encontrar=false;
                posicion=-1;
            }
        }
    }

    cout<<texto;

    return posicion;

}

void Subrayado(int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout<<"^";
    }
}

int main()
{
    string palabra,texto;
    cout<<"Cual es la palabra que quiere buscar?: ";
    getline(cin, palabra);

    int tam=palabra.size();
    cout<<"Escriba el texto donde quiere buscar su palabra: "<<endl;
    int linea=0;

    do
    {
        linea=linea+1;
        getline(cin,texto);
        if(texto[0]!='#')
        {
            cout<<linea<<": ";
            int posicion=Buscador(palabra,texto);
            cout<<endl;
            if(posicion==-1)
            {
                cout<<linea<<": ";
                for(int i=0; i<texto.size(); i++)
                {
                    cout<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<linea<<": ";
                for(int i=0; i<posicion; i++)
                {
                    cout<<" ";
                }
                Subrayado(tam);
                cout<<endl;
            }
        }


    }
    while(texto[0]!='#');
    cout<<"Fin :)";

}


