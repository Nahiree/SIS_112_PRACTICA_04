/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 19/09/2023

Fecha modificación: 20/09/2023

Número de ejercicio: 7

Problema planteado: Escribir un programa que lea el salario de un empleado y mediante una
función efectué un incremento salarial en base a la siguiente escala:
• Si el salario es menor < 1000 Bs. incremente en un 20%
• Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en
un 15%
• Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente en
un 10%
• Si el salario es mayor o igual a 6000 Bs. Incremente en un 5%
La función debe obtener el incremento y el nuevo salario.
*/

#include <iostream>

using namespace std;

int lectura();
void aumento(int monto);

int main (){
    int sueldo;
    sueldo  = lectura();
    aumento(sueldo);
}

//lee el salario

int lectura(){
    int salario;
    cout << "Ingresa el salario, por favor: ";
    cin >> salario;
    return salario;
}

//Calcula el aumento segun el sueldo
void aumento (int monto){
    int incremento, nuevo_s;
    if (monto <1000){
    incremento = monto * 0.2;
    }
    else if (monto >=1000 && monto <3000){
    incremento = monto * 0.15;
    }
    else if (monto >=3000 && monto <6000){
    incremento = monto * 0.1;
    }
    else if (monto >=6000){
    incremento = monto * 0.05;
    }
    nuevo_s = incremento+monto;
    cout << "El incremento es: "<< incremento<< endl;
    cout << "El nuevo salario es: "<< nuevo_s << endl;
}

