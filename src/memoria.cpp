#include <iostream>
#include <TazoDorado.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    // int entero = 0;
    // bool booleano = true;
    // char letra = 'A';
    // float decimal = 0.5;
    // TazoDorado tazo1;
    // TazoDorado tazo2;

    // cout << "Tamaño entero:" << sizeof(entero)<<endl;
    // cout << "Tamaño booleano:" << sizeof(booleano)<<endl;
    // cout << "Tamaño letra:" << sizeof(letra)<<endl;
    // cout << "Tamaño decimal:" << sizeof(decimal)<<endl; 
    // cout << "Tamaño Tazo:" << sizeof(decimal)<<endl;
    // cout << "Direccion de Tazo1: " << &tazo1<<endl;
    // cout << "Direccion de Tazo2: " << &tazo2<<endl;


    // TazoDorado tazos[20];

    // for (size_t i=0; i<20; i++)
    // {
    //     cout << "Dirección de tazo " << i << ":" << &tazos[i]<< endl;
    // }

    TazoDorado* direccion;
    cout << "Dirección de direccion: " << &direccion<< endl;
    direccion = (TazoDorado *) malloc(sizeof(TazoDorado));
    // cout << "Dirección dinamica 0: " << direccion << endl;
    // cout << "Dirección dinamica 1: " << direccion+1 << endl;

    direccion->inicializar();
    cout << "Valor en direccion: " << direccion->IsFloating() << endl;

///C++-------------------------------------------------------------------------------

    TazoDorado *direccion2;
    direccion2 =new TazoDorado;

    cout<<"Valor de direccion; "<< direccion2->IsFloating() << endl;
    return 0;
}
