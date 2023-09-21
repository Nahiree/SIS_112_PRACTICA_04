/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 19/09/2023

Fecha modificación: 20/09/2023

Número de ejercicio: 4

Problema planteado: Escribir el programa para solicitar al usuario N calificaciones
comprendidas en el rango  de 1 a 100, calcular y presentar la sumatoria y promedio de estas
N calificaciones. La  entrada de valores es para las calificaciones, debe hacerlo mediante
una función.
*/

#include <iostream>

using namespace std;

int lectura(int n, int notasl[]);
int  sumatoria (int n,int vector1[]);
float  promedio (int n, int vector1[]);

//Funcion principal
int main (){
    int n;
    cout << "Ingresa la cantidad de notas: ";
    cin >> n;
    int notas[n];
    notas[n] = lectura(n, notas);
    int suma;
    float prom;
    suma = sumatoria(n, notas);
    prom = promedio (n,notas);
    cout << "La sumatoria es: "<< suma<< endl;
    cout << "El promedio es: "<< prom<< endl;
}
//Esta funcion lee las notas;
int lectura(int n, int notasl[]){
    int i;
    for (i=0 ; i<n; i++){
    cout << "Ingrese la nota por favor: ";
    cin >> notasl[i];
    if (notasl[i]<0 || notasl[i]>100){
        cout << "La nota no esta en el rango permitido, ingresa un nueva nota por favor: ";
        cin >> notasl[i];
    }
    }
    return notasl[n];
}

//Funcion que saca la sumatoria
int sumatoria (int n, int vector1[]){
    int i;
    int suma= 0;
    for (i=0 ; i<n ; i++){
    suma=suma+vector1[i];
    }
    return suma;
}

//Funcion que saca el promedio
float promedio(int n, int vector1[]){
    int i;
    int suma=0;
    float promedio;
    for (i=0 ; i<n ; i++){
    suma=suma+vector1[i];
    }
    promedio = float(suma)/float(n);
    return promedio;
}
