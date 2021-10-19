// #include <stdio.h>
// #include <stdlib.h>
// using namespace std;
// #include <string>
// #include <iostream>
// #include <time.h>

// #include "listexception.h"

// class CNodo
// {
// private:
//     float fContenido;
//     CNodo *siguiente;
//     friend class CLista;

// public:
//     CNodo();
//     ~CNodo();
//     void InsertarAdelante(float); // InsertarAdelante crea un nuevo nodo, le asigna fData como fContenido al nuevo nodo, por último inserta el nuevo nodo delante del nodo actual.
//     float EliminarSiguiente();    // EliminarSiguiente Borra el nodo apuntado por pSiguiente rehace los enlaces para que la lista siga siendo consistente.
// };

// CNodo::CNodo()
// {
//     this->siguiente = nullptr;
// }
// CNodo::~CNodo() {}

// void CNodo::InsertarAdelante(float fData)
// {
//     CNodo *pNewNode;
//     pNewNode = new CNodo;
//     pNewNode->fContenido = fData;
//     pNewNode->siguiente = this->siguiente;
//     this->siguiente = pNewNode;
// }

// float CNodo::EliminarSiguiente()
// {
//     float fSigContenido = this->siguiente->fContenido;
//     delete this->siguiente;
//     this->siguiente = this->siguiente->siguiente;
//     return fSigContenido;
// }

// //
// class CLista
// {
// private:
//     CNodo Inicio;
//     //CNodo Final;

// public:
//     CLista();
//     ~CLista();
//     bool IsEmpty(); //devuelve true solo cuando la lista esta vacía.
//     void Vaciar();  //Elimina todos los elementos de la lista, no regresa ninguno por lo que estos elementos se pierden.
//     void Imprime(); //Imprime el contenido de la lista.
// };

// CLista::CLista()
// {
//     //Inicio.siguiente = &Final;
//     Inicio.siguiente = nullptr;
// }

// CLista::~CLista()
// {
//     this->Vaciar();
// }

// bool CLista::IsEmpty()
// {
//     return Inicio.siguiente == nullptr;
// }

// void CLista::Vaciar()
// {
//     while (Inicio.siguiente != nullptr)
//     {
//         Inicio.EliminarSiguiente();
//     }
// }

// void CLista::Imprime()
// {
//     CNodo *pIterNode = Inicio.siguiente;
//     while (pIterNode != nullptr)
//     {
//         cout << pIterNode->fContenido << "\t";
//         pIterNode = pIterNode->siguiente;
//     }
// }

// int main()
// {
//     // Testeo desde el main

//     return 0;
// }

//
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>

#include "listexception.h"

class FloatNum
{
private:
    float floatData;
    // friend class CNodo;

public:
    FloatNum();
    void initFloat(float);
    float getData();
    ~FloatNum();
};

FloatNum::FloatNum() {}

void FloatNum::initFloat(float _floatData)
{
    floatData = _floatData;
}

float FloatNum::getData()
{
    return floatData;
}

FloatNum::~FloatNum() {}

//
class CNodo
{
private:
    FloatNum fContenido;
    CNodo *siguiente;
    // FloatNum getFloatData();
    friend class CLista;

public:
    CNodo();
    ~CNodo();
    void InsertarAdelante(FloatNum); // InsertarAdelante crea un nuevo nodo, le asigna fData como fContenido al nuevo nodo, por último inserta el nuevo nodo delante del nodo actual.
    FloatNum EliminarSiguiente();    // EliminarSiguiente Borra el nodo apuntado por pSiguiente rehace los enlaces para que la lista siga siendo consistente.
    FloatNum getMember();
};

CNodo::CNodo()
{
    this->siguiente = nullptr;
}
CNodo::~CNodo() {}

void CNodo::InsertarAdelante(FloatNum fData)
{
    CNodo *pNewNode;
    pNewNode = new CNodo;
    pNewNode->fContenido = fData;
    pNewNode->siguiente = this->siguiente;
    this->siguiente = pNewNode;
}

FloatNum CNodo::EliminarSiguiente()
{
    FloatNum fSigContenido = this->siguiente->fContenido;
    delete this->siguiente;
    this->siguiente = this->siguiente->siguiente;
    return fSigContenido;
}

// FloatNum CNodo::getFloatData()
// {
//     return fContenido;
// }

//
class CLista
{
private:
    CNodo Inicio;
    //CNodo Final;

public:
    CLista();
    ~CLista();
    bool IsEmpty(); //devuelve true solo cuando la lista esta vacía.
    void Vaciar();  //Elimina todos los elementos de la lista, no regresa ninguno por lo que estos elementos se pierden.
    void Imprime(); //Imprime el contenido de la lista.
};

CLista::CLista()
{
    //Inicio.siguiente = &Final;
    Inicio.siguiente = nullptr;
}

CLista::~CLista()
{
    this->Vaciar();
}

bool CLista::IsEmpty()
{
    return Inicio.siguiente == nullptr;
}

void CLista::Vaciar()
{
    while (Inicio.siguiente != nullptr)
    {
        Inicio.EliminarSiguiente();
    }
}

void CLista::Imprime()
{
    CNodo *pIterNode = Inicio.siguiente;
    while (pIterNode != nullptr)
    {
        cout << pIterNode->fContenido.getData() << "\t";
        pIterNode = pIterNode->siguiente;
    }
}

int main()
{
    // Testeo desde el main

    return 0;
}
