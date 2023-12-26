#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int LeerRango(int a,int b)
{
    int c;
    do{
        cout << "Introduzca el numero de valores que va a usar." << endl << "Tiene que estar entre " << a << " y " << b << ": ";
        cin >> c;
    }while( c<a || c>b);
    return c;
}

int main()
{
    int Numero_datos=LeerRango(2,20);
    vector<double> datos(Numero_datos);

   cout << "Introduzca los datos que vamos a usar: " << endl;

   for(int i=0;i<Numero_datos;i++)
   {
       cout << "Dato " << i+1 << ": ";
       cin >> datos[i];
   }

   cout << "Vamos a estudiar el siguiente conjunto de valores: ";
   for(int i=0;i<Numero_datos;i++)
   {
       cout << datos[i] << " ";
   }

   cout << endl;

   double suma1=0;
   for(int i=0;i<Numero_datos;i++)
   {
       suma1=suma1+datos[i];
   }
   double media=suma1/Numero_datos;
   cout << "La media es " << media << endl;

   double suma2=0;
   for (int i=0;i<Numero_datos;i++)
   {
       suma2=suma2+abs(datos[i]-media);
   }
   double desviacion=suma2/Numero_datos;
   cout << "La desviacion es " << desviacion << endl;

   double suma3=0;
   for (int i=0;i<Numero_datos;i++)
   {
       suma3=suma3+pow((datos[i]-media),2);
   }
   double varianza=suma3/Numero_datos;
   cout << "La varianza es " << varianza << endl;
}
