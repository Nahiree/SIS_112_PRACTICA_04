/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 19/09/2023

Fecha modificación: 20/09/2023

Número de ejercicio: 2

Problema planteado:  Lee por teclado la fecha actual y la fecha de nacimiento de una
persona y calcula su edad.
*/

#include <iostream>

using namespace std;

int fechas(int nacimiento [], int actual[]);
int calculo (int nacimiento[], int actual[], int edad[]);

//Declaracion funcion principal

int main (){
    int nacimiento [3], actual [3], edad[3];
    cout << "Ingresa tu fecha de nacimiento: ";
    cin >> nacimiento[0]>> nacimiento[1]>> nacimiento[2];
    cout << "Ingresa la fecha actual: ";
    cin >> actual[0]>> actual[1]>> actual[2];
    calculo(nacimiento, actual, edad);
    edad[3] = calculo(nacimiento, actual,edad);
    cout << "Usted tiene: "<< edad[2]<< " anios." <<endl;
}
//Esta funcion calcula la edad

int calculo (int nacimiento[], int actual[], int edad[]){
    edad[2]= actual[2]- nacimiento[2];
    if (nacimiento[1]>actual[1]){
        edad[2]= edad[2]-1;
    }
    if (nacimiento[1]==actual[1]){
        if(nacimiento[0]>actual[0]){
            edad[2]=edad[2]-1;
        }
    }
    return edad[3];
}
