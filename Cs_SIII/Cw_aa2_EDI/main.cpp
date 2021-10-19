
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Test
{
private:
    int testNum = 0;

public:
    void testFunc()
    {
        cout << "numero: " << testNum << endl;
    }
};

int main()
{
    Test t1 = Test();
    return 0;
}

// #include <stdio.h>
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// // ---
// // class Fecha
// // {
// // private:
// //     int dd;
// //     int mm;
// //     int yy;

// // public:
// //     Fecha(int, int, int);
// //     //void leer();
// // };

// // // Constructor
// // Fecha::Fecha(int _dd, int _mm, int _yy)
// // {
// //     dd = _dd;
// //     mm = _mm;
// //     yy = _yy;
// // }

// class Fecha
// {
//     int dd;
//     int mm;
//     int yy;
// };

// // --
// // class Producto
// // {
// // private:
// //     string codigo;
// //     string nombre;
// //     float peso;
// //     Fecha fecha;
// //     float precioMayoreo;
// //     float precioMenudeo;
// //     int existencia;
// // public:
// //     Producto(string, string, float, Fecha, float, float, int);
// //     //void leer();
// // };

// // // Constructor
// // Producto::Producto(string _codigo, string _nombre, float _peso, Fecha _fecha, float _precioMayoreo, float _precioMenudeo, int _existencia)
// // {
// //     codigo = _codigo;
// //     nombre = _nombre;
// //     peso = _peso;
// //     fecha = _fecha;
// //     precioMayoreo = _precioMayoreo;
// //     precioMenudeo = _precioMenudeo;
// //     existencia = _existencia;
// // }

// class Producto
// {
//     public:
//         string codigo;
//         string nombre;
//         float peso;
//         //Fecha fecha;
//         float precioMayoreo;
//         float precioMenudeo;
//         int existencia;
// };

// // --
// class Coleccion
// {
//     protected:
//         Producto coleccionTienda[500];
//     public:
//         Coleccion(Producto);
// };

// // Constructor
// Coleccion::Coleccion(Producto _coleccionTienda)
// {
//     coleccionTienda = _coleccionTienda;
// }

// class Menu
// {
// private:
//     int indice = 0;
//     //Producto p1 = Producto("0038549", "ChipFX1", 70.00, (20, 8, 21), 450.00, 540.00, 40) ;
// public:
//     Menu(int);
//     void anadirElemento();
//     void borrarRegisto();
//     void leer();
// };

// // Constructor
// Menu::Menu(int _indice)
// {
//     indice = _indice;
// }

// void Menu::leer()
// {
//     //cout << "Hola soy " << nombre << " tengo " << edad << " y estoy leyendo un libro" << endl;
// }

// void Menu::anadirElemento()
// {

// }

// int main()
// {
//     //Fecha p1 = Fecha(22, "Francisco");
//     // p1.leer();

//     return 0;
// }