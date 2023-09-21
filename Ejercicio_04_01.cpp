/*Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 19/09/2023

Fecha modificaci�n: 21/09/2023

N�mero de ejercicio: 1

Problema planteado:  Lee por teclado un a�o y calcula y muestra si es bisiesto
*/

#include <iostream>

using namespace std;

void biciesto (int anio);

//funcion principal.

int main (){
int anio;
    cout << "Ingresa el anio por favor: ";
    cin >> anio;
    biciesto (anio);
    return 0;
}
//Esta funcion nos indica si el a;o es biciesto.

void biciesto (int anio){
    if (anio%4==0 && anio%100==0){
    if (anio%400==0){
        cout << "El anio es biciesto."<< endl;
    }
    else
        cout << "El anio no es biciesto."<< endl;
    }
    else if (anio%4==0){
        cout << "El anio es biciesto."<< endl;
    }
    else if (anio%4!=0){
        cout << "El anio no es biciesto."<< endl;
    }
}

