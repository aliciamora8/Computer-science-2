#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
vector<vector<double> > vendedores;
int v;
int i=0;
cout<<"Introduzca una venta: ";
cin>>v;
while(v!=-2){
    vector<double>ventas;
    vendedores.push_back(ventas);
    while(v>-1){
       vendedores[i].push_back(v);
       cout<<"Introduce otra venta: ";
       cin>>v;
    }
i++;
cout<<"Introduce la ventas de otro vendedor: ";
cin>>v;
}
vector<double>sumavector;
for(int i=0; i<vendedores.size(); i++){
    cout<<"Vendedor "<<i+1<<": ";
    int suma=0;
    for(int j=0; j<vendedores[i].size(); j++){
        suma=suma+vendedores[i][j];
    }
    sumavector.push_back(suma);
    cout<<suma<<endl;
}

    cout<<"Listado de ventas: "<<endl;
    for(int a=0; a<vendedores.size(); a++){
        cout<<"Vendedor "<<a+1<<": "<<sumavector[a]<<" (";
            for(int j=0; j<vendedores[a].size()-1; j++){
                cout<<vendedores[a][j]<<"+";
            }
            cout<<vendedores[a][vendedores[a].size()-1]<<")"<<endl;
    }

    vector<int> vendedor;
    for(int j=0; j<sumavector.size(); j++)
        vendedor.push_back(j);


    for(int b=0; b<sumavector.size(); b++){
        int aux2;
        int maximo=b;
        for(int j=b+1; j<sumavector.size(); j++){
            if(sumavector[vendedor[j]]>sumavector[vendedor[maximo]])
                maximo=j;
        }
        aux2=vendedor[b];
        vendedor[b]=vendedor[maximo];
        vendedor[maximo]=aux2;
    }

    cout<<endl<<"Listado ordenado:"<<endl;
    for(int a=0; a<vendedores.size(); a++){
        cout<<"Vendedor "<<vendedor[a]+1<<": "<<sumavector[vendedor[a]]<<" (";
            for(int j=0; j<vendedores[vendedor[a]].size()-1; j++){
                cout<<vendedores[vendedor[a]][j]<<"+";
            }
            cout<<vendedores[vendedor[a]][vendedores[vendedor[a]].size()-1]<<")"<<endl;
}}



