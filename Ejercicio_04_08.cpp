/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 21/09/2023

Fecha modificación: 21/09/2023

Número de ejercicio: 8

Problema planteado:  En una fábrica de computadoras se planea ofrecer a los clientes un
descuento quedependerá del número de computadoras que compre. Si las computadoras son menos
de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de
computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada
computadora es un valor que el usuario ingrese desde el teclado. Se debe obtener el
precio total que el cliente debe pagar y el valor del descuento.
*/

#include <iostream>

using namespace std;

int sumatoria(int n, int datos[]);
int descuento (int n, int total);

int main (){
    int n, suma, i, desc;
    cout << "Ingresa l numero de computadoras a comprar: ";
    cin >> n;
    int precios[n];
    for (i=0 ; i<n ; i++){
    cout << "Ingresa el precios de la computadora: ";
    cin >> precios[i];
    }
    suma = sumatoria(n,precios);
    desc= descuento (n, suma);
    cout << "El precio total de las computadoras es: "<< suma<< " Bs."<< endl;
    cout << "El valor de descuento es: "<< desc<< " Bs."<< endl;
    cout << "El valor total a pagar es: " << suma-desc<< " Bs."<< endl;
}

//Saca la sumatoria

int sumatoria (int n, int datos[]){
    int suma=0, i;
    for (i=0 ; i<n ; i++){
    suma = suma + datos[i];
    }
    return suma;
}

//Calcula el descuento total, incluido el anticipo
int descuento (int n, int total){
    int rebaja;
    if (n<5){
        rebaja = total*0.1;
    }
    else if (n>=5 && n<10){
        rebaja = total*0.2;
    }
    else if (n>=10){
        rebaja = total*0.4;
    }
    return rebaja;
}


