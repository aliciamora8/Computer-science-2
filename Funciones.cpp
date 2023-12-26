#include <iostream>

#include <cmath>

#include <vector>

using namespace std;

float Media(const vector<double>&vector, double n){
    double suma=0;
    for(int i=0; i<vector.size(); i++){
    suma=suma+vector[i];
    }
    float media;
    media=suma/n;

    return media;
}

float DesviacionMedia(const vector<double>&vector, double n, float media){
    double suma=0;
    for(int i=0; i<vector.size(); i++){
    suma=abs(vector[i]-media)+suma;
    }
    float desviacionmedia;
    desviacionmedia=suma/n;

    return desviacionmedia;
}

float Varianza(const vector<double>&vector, double n, float media){
    double suma=0;
    for(int i=0; i<vector.size(); i++){
    suma=pow(vector[i]-media,2)+suma;
    }
    float varianza;
    varianza=suma/n;

    return varianza;
}

int main()
{
 double n;
 do
 {
     cout<<"Introduce el numero de elementos del vector:";
     cin>>n;
 } while(n<0);

 vector<double>vector(n);
 for(int i=0; i<vector.size(); i++){
    cout<<"Introduce un numero:";
    cin>>vector[i];
 }
 //Sacar el vector
 cout<<"El vector introducido es: vector["<<n<<"]={ ";
 for(int i=0; i<vector.size(); i++){
    cout<<vector[i]<<" ";
 }
 cout<<"}"<<endl;

 float media=Media(vector,n);
 cout<<"La media de los numeros introducidos en el vector es: "<<media<<endl;

 float desviacionmedia=DesviacionMedia(vector,n,media);
 cout<<"La desviacion media de los numeros introducidos en el vector es: "<<desviacionmedia<<endl;

 float varianza=Varianza(vector,n,media);
 cout<<"La varianza de los numeros introducidos en el vector es: "<<varianza<<endl;
}
