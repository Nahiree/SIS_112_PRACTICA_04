/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 20/09/2023

Fecha modificación: 20/09/2023

Número de ejercicio: 3

Problema planteado:  Leer los datos de doce personas como son: nombre, edad, estatura,
peso, posteriormente  indicar cuál es el nombre de la persona de menor edad, el promedio
de las estaturas y el  de los pesos. (realizar con estructuras)
*/

#include <iostream>
#include <string>

using namespace std;

//Deficion de estructura con los datos pedidos.
struct datos{
    char nombre[35];
    int edad;
    float estatura;
    float peso;
}dato[12];

//Nombramos nuestras funciones.

int menor(int n);
float promedio_e(int n);
float promedio_p(int n);

//Programa orincipal

int main (){
    int i;
    const int n=12;
    float prom_e, prom_p;
    int menor_p;
    for (i=0; i<n ; i++){
    cout << "Usted es la persona numero: "<< i+1<< endl;
    cout<< "Ingresa los siguientes datos por favor."<< endl;
    cout << "Nombre: ";
    cin.getline(dato[i].nombre, sizeof(dato[i].nombre));
    cout << "Edad: ";
    cin >> dato[i].edad;
    cout << "Estatura en cm: ";
    cin >> dato[i].estatura;
    cout << "Peso: ";
    cin>> dato[i].peso;
    cout << endl;
    cin.ignore();
    }
    menor_p = menor(n);
    prom_e = promedio_e(n);
    prom_p = promedio_p(n);
    cout << "La persona con menor edad es: "<< dato[menor_p].nombre<< endl;
    cout << "El promedio de la estatura es: "<< prom_e<< endl;
    cout << "El promedio de el peso es: "<< prom_p<< endl;
}

//Determina quien es la persona con menor edad.

int menor(int n){
    cout << "Hola!";
    int menor =200, i;
    for (i=0 ; i<n ; i++){
        if (dato[i].edad<menor){
            menor = i;
        }
    }
    cout << menor;
    return menor;
}

// Saca el promedio de la estatura.

float promedio_e (int n){
    int sum=0, prom, i;
    for (i=0; i<n ; i++){
        sum=sum+dato[i].estatura;
    }
    prom = float(sum)/float(n);
    return prom;
}
// Saca el promedio de el peso.
float promedio_p(int n){
    int sum=0, prom, i;
    for (i=0; i<n ; i++){
        sum=sum+dato[i].peso;
    }
    prom = float(sum)/float(n);
    return prom;
}

