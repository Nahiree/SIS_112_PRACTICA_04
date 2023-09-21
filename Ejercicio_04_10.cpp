/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 21/09/2023

Fecha modificación: 21/09/2023

Número de ejercicio: 10

Problema planteado:  Construir las funciones para ordenar un vector de N elementos
aleatorios y los ordene por.
• Por selección
• Por inserción
• Por el método burbuja
• Por el método Shell
• Por QuickSort
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void seleccion(int vector2[], int n);
void insercion (int vector3[], int n);
void burbuja (int vector4[], int n);
void shellshort (int vector5[], int n);

int main (){
    int n, i;
    srand((unsigned)time(0));
    cout << "Ingresa la cantidad de numeros: ";
    cin >> n;
    int vector1[n];
    for (i=0 ; i < n ; i++){
        vector1[i] = (rand()% (11-1)+1);
    }
    cout << "Vector original: " <<endl;
    for (i=0 ; i < n ; i++){
        cout << vector1[i]<< ", ";
    }
    seleccion(vector1,n);
    insercion(vector1,n);
    burbuja(vector1,n);
    shellshort(vector1,n);
}

void seleccion(int vector2[],int n){
    int i, j;
    int aux;
    int vector1c[n];
    for (i=0 ; i<n ; i++){
        vector1c[i]=vector2[i];
    }
     for (i=0 ; i < n ; i++){
        for (j=0 ; j < n ; j++){
            if (vector1c[i]< vector1c[j]){
            aux = vector1c[i];
            vector1c[i]=vector1c[j];
            vector1c[j]= aux;
            }
        }
    }
    cout << "\nVector ordenado por seleccion: "<< endl;
    for (i=0 ; i < n ; i++){
        cout << vector1c[i]<< ", ";
    }
}
void insercion(int vector3[],int n){
    int i, j, k, l;
    int aux;
    int vector1c[n];
    for (i=0 ; i<n ; i++){
        vector1c[i]=vector3[i];
    }
    cout << endl;
    cout << "\nVector ordenado por insercion: "<<endl;
    for (i=0 ; i < n ; i++){
        for (l=0 ; l<=i ; l++){
        for (j=0 ; j <=i ; j++){
            if (vector1c[i]< vector1c[j]){
            aux = vector1c[i];
            vector1c[i]=vector1c[j];
            vector1c[j]= aux;
            }
        }
        }
        for (k=0 ; k < n ; k++){
            cout << vector1c[k]<< ", ";
        }
    cout <<endl;
    }
}

void burbuja(int vector3[],int n){
    int i, j, aux;
    int vector1c[n];
    for (i=0 ; i<n ; i++){
        vector1c[i]=vector3[i];
    }
    cout << "\nVector ordenado por burbuja: "<<endl;
    for (i=0 ; i < n ; i++){
        for (j=0 ; j < n ; j++){
            if (vector1c[j]> vector1c[j+1]){
            aux = vector1c[j];
            vector1c[j]=vector1c[j+1];
            vector1c[j+1]= aux;
            }
        }
    }
    for (i=1 ; i <=n ; i++){
        cout << vector1c[i]<< " ";
    }
    cout <<endl;
}

void shellshort(int vector4[],int n){
    int i, j, aux, aux2;
    int vector1c[n];
    for (i=0 ; i<n ; i++){
        vector1c[i]=vector4[i];
    }
    cout << "\nVector ordenado por shellshort: "<<endl;
    aux = n/2;
    for (i=0 ; i < n ; i++){
        n= aux;
        if (vector1c[i]< vector1c[i+n]){
        aux2 = vector1c[i];
        vector1c[i]= vector1c[i+n];
        vector1c[i+n]=aux2;
        }
        n= aux;
        aux= n/2;
    }
    for (i=0 ; i < n ; i++){
    cout << vector1c[i]<< " ";
    }
    cout <<endl;
    }



