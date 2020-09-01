#ifndef busqueda_h
#define busqueda_h

#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

template<typename T>
class Busqueda{
    public:
    Busqueda(){};
    ~Busqueda(){};
    int BusquedaSecuencial(vector<T>e, int n);
    int BusquedaSecuencialOrd1(vector<T>e, int n);
    int BusquedaSecuencialOrd2(vector<T>e, int n);
    int BusquedaBinaria(vector<T>e, int inicio, int final, int n);
};


template<typename T>
int Busqueda<T>::BusquedaSecuencial(vector<T>e, int n){
    for(size_t i=0;i<e.size();i++){
        if(e.at(i)==n){
            return i;
        }
    }
    return -1;
};

template<typename T>
int Busqueda<T>::BusquedaBinaria(vector<T>e, int inicio, int final, int n){
    int i;
    if(final<inicio){
        return -1;
    }
    else{
        int puntoMedio=(inicio+final)/2;
        if(n==e.at(puntoMedio)){
            i=puntoMedio;
        }
        else if(n<e.at(puntoMedio)){
            i=BusquedaBinaria(e,inicio,puntoMedio-1,n);
        }
        else{
            i=BusquedaBinaria(e,puntoMedio+1,final, n);
        }
    }
    return i-1;

};

template<typename T>
int Busqueda<T>::BusquedaSecuencialOrd1(vector<T>e, int n){
    for(int i=0;i<n;i++){
        if(n==e.at(i)){
            return i;
        }
    }
    return -1;


};

template<typename T>
int Busqueda<T>::BusquedaSecuencialOrd2(vector<T>e, int n){
    int i=0;
    bool bandera=false;
    while((bandera==false)&& (i<e.size())){
        if(e.at(i)==n){
            bandera=true;
            return i;
        }
        i++;
    }
        return -1;


}

#endif
