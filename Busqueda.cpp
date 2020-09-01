#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Busqueda.h"

using namespace std;

template<typename T>
void ImprimirVector(vector<T> e, int n){
    for (size_t i = 0; i < e.size() && i<n; i++)
    {
        cout << e[i] << "  ";
    }
    cout << endl;
    
}

int main(){
    vector<int> elementos;
    int count=10;
    int num;
    srand((unsigned) time(0));
    for(size_t i=0; i<count; i++){
        elementos.push_back((int)rand() % 10);
    }
    ImprimirVector(elementos, count);

    cout << "Ingrese el número que desea buscar: ";
    cin >> num;

    Busqueda<int> b;
    cout << "El número que busca se encuentra en la posición: " << b.BusquedaSecuencial(elementos, num)<< endl;
    cout << "El número que busca se encuentra en la posición: " << b.BusquedaSecuencialOrd1(elementos, num)<< endl;
    cout << "El número que busca se encuentra en la posición: " << b.BusquedaSecuencialOrd2(elementos, num)<< endl;
    cout << "El número que busca se encuentra en la posición: " << b.BusquedaBinaria(elementos, 0,count,num)<< endl;
    return 0;
}